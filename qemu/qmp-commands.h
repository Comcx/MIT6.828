/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * schema-defined QAPI function prototypes
 *
 * Copyright IBM, Corp. 2011
 *
 * Authors:
 *  Anthony Liguori   <aliguori@us.ibm.com>
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 *
 */

#ifndef QMP_COMMANDS_H
#define QMP_COMMANDS_H

#include "qapi-types.h"
#include "qapi/qmp/qdict.h"
#include "qapi/error.h"

VersionInfo *qmp_query_version(Error **errp);
int qmp_marshal_input_query_version(Monitor *mon, const QDict *qdict, QObject **ret);
CommandInfoList *qmp_query_commands(Error **errp);
int qmp_marshal_input_query_commands(Monitor *mon, const QDict *qdict, QObject **ret);
BlockInfoList *qmp_query_block(Error **errp);
int qmp_marshal_input_query_block(Monitor *mon, const QDict *qdict, QObject **ret);
BlockStatsList *qmp_query_blockstats(bool has_query_nodes, bool query_nodes, Error **errp);
int qmp_marshal_input_query_blockstats(Monitor *mon, const QDict *qdict, QObject **ret);
BlockJobInfoList *qmp_query_block_jobs(Error **errp);
int qmp_marshal_input_query_block_jobs(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_passwd(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *password, Error **errp);
int qmp_marshal_input_block_passwd(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_resize(bool has_device, const char *device, bool has_node_name, const char *node_name, int64_t size, Error **errp);
int qmp_marshal_input_block_resize(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_blockdev_snapshot_sync(bool has_device, const char *device, bool has_node_name, const char *node_name, const char *snapshot_file, bool has_snapshot_node_name, const char *snapshot_node_name, bool has_format, const char *format, bool has_mode, NewImageMode mode, Error **errp);
int qmp_marshal_input_blockdev_snapshot_sync(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_change_backing_file(const char *device, const char *image_node_name, const char *backing_file, Error **errp);
int qmp_marshal_input_change_backing_file(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_commit(const char *device, bool has_base, const char *base, bool has_top, const char *top, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, Error **errp);
int qmp_marshal_input_block_commit(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_drive_backup(const char *device, const char *target, bool has_format, const char *format, MirrorSyncMode sync, bool has_mode, NewImageMode mode, bool has_speed, int64_t speed, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, Error **errp);
int qmp_marshal_input_drive_backup(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_blockdev_backup(const char *device, const char *target, MirrorSyncMode sync, bool has_speed, int64_t speed, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, Error **errp);
int qmp_marshal_input_blockdev_backup(Monitor *mon, const QDict *qdict, QObject **ret);
BlockDeviceInfoList *qmp_query_named_block_nodes(Error **errp);
int qmp_marshal_input_query_named_block_nodes(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_drive_mirror(const char *device, const char *target, bool has_format, const char *format, bool has_node_name, const char *node_name, bool has_replaces, const char *replaces, MirrorSyncMode sync, bool has_mode, NewImageMode mode, bool has_speed, int64_t speed, bool has_granularity, uint32_t granularity, bool has_buf_size, int64_t buf_size, bool has_on_source_error, BlockdevOnError on_source_error, bool has_on_target_error, BlockdevOnError on_target_error, Error **errp);
int qmp_marshal_input_drive_mirror(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_set_io_throttle(const char *device, int64_t bps, int64_t bps_rd, int64_t bps_wr, int64_t iops, int64_t iops_rd, int64_t iops_wr, bool has_bps_max, int64_t bps_max, bool has_bps_rd_max, int64_t bps_rd_max, bool has_bps_wr_max, int64_t bps_wr_max, bool has_iops_max, int64_t iops_max, bool has_iops_rd_max, int64_t iops_rd_max, bool has_iops_wr_max, int64_t iops_wr_max, bool has_iops_size, int64_t iops_size, Error **errp);
int qmp_marshal_input_block_set_io_throttle(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_stream(const char *device, bool has_base, const char *base, bool has_backing_file, const char *backing_file, bool has_speed, int64_t speed, bool has_on_error, BlockdevOnError on_error, Error **errp);
int qmp_marshal_input_block_stream(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_job_set_speed(const char *device, int64_t speed, Error **errp);
int qmp_marshal_input_block_job_set_speed(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_job_cancel(const char *device, bool has_force, bool force, Error **errp);
int qmp_marshal_input_block_job_cancel(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_job_pause(const char *device, Error **errp);
int qmp_marshal_input_block_job_pause(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_job_resume(const char *device, Error **errp);
int qmp_marshal_input_block_job_resume(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_job_complete(const char *device, Error **errp);
int qmp_marshal_input_block_job_complete(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_blockdev_add(BlockdevOptions *options, Error **errp);
int qmp_marshal_input_blockdev_add(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_block_set_write_threshold(const char *node_name, uint64_t write_threshold, Error **errp);
int qmp_marshal_input_block_set_write_threshold(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_blockdev_snapshot_internal_sync(const char *device, const char *name, Error **errp);
int qmp_marshal_input_blockdev_snapshot_internal_sync(Monitor *mon, const QDict *qdict, QObject **ret);
SnapshotInfo *qmp_blockdev_snapshot_delete_internal_sync(const char *device, bool has_id, const char *id, bool has_name, const char *name, Error **errp);
int qmp_marshal_input_blockdev_snapshot_delete_internal_sync(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_eject(const char *device, bool has_force, bool force, Error **errp);
int qmp_marshal_input_eject(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_nbd_server_start(SocketAddress *addr, Error **errp);
int qmp_marshal_input_nbd_server_start(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_nbd_server_add(const char *device, bool has_writable, bool writable, Error **errp);
int qmp_marshal_input_nbd_server_add(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_nbd_server_stop(Error **errp);
int qmp_marshal_input_nbd_server_stop(Monitor *mon, const QDict *qdict, QObject **ret);
TraceEventInfoList *qmp_trace_event_get_state(const char *name, Error **errp);
int qmp_marshal_input_trace_event_get_state(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_trace_event_set_state(const char *name, bool enable, bool has_ignore_unavailable, bool ignore_unavailable, Error **errp);
int qmp_marshal_input_trace_event_set_state(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_add_client(const char *protocol, const char *fdname, bool has_skipauth, bool skipauth, bool has_tls, bool tls, Error **errp);
int qmp_marshal_input_add_client(Monitor *mon, const QDict *qdict, QObject **ret);
NameInfo *qmp_query_name(Error **errp);
int qmp_marshal_input_query_name(Monitor *mon, const QDict *qdict, QObject **ret);
KvmInfo *qmp_query_kvm(Error **errp);
int qmp_marshal_input_query_kvm(Monitor *mon, const QDict *qdict, QObject **ret);
StatusInfo *qmp_query_status(Error **errp);
int qmp_marshal_input_query_status(Monitor *mon, const QDict *qdict, QObject **ret);
UuidInfo *qmp_query_uuid(Error **errp);
int qmp_marshal_input_query_uuid(Monitor *mon, const QDict *qdict, QObject **ret);
ChardevInfoList *qmp_query_chardev(Error **errp);
int qmp_marshal_input_query_chardev(Monitor *mon, const QDict *qdict, QObject **ret);
ChardevBackendInfoList *qmp_query_chardev_backends(Error **errp);
int qmp_marshal_input_query_chardev_backends(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_ringbuf_write(const char *device, const char *data, bool has_format, DataFormat format, Error **errp);
int qmp_marshal_input_ringbuf_write(Monitor *mon, const QDict *qdict, QObject **ret);
char *qmp_ringbuf_read(const char *device, int64_t size, bool has_format, DataFormat format, Error **errp);
int qmp_marshal_input_ringbuf_read(Monitor *mon, const QDict *qdict, QObject **ret);
EventInfoList *qmp_query_events(Error **errp);
int qmp_marshal_input_query_events(Monitor *mon, const QDict *qdict, QObject **ret);
MigrationInfo *qmp_query_migrate(Error **errp);
int qmp_marshal_input_query_migrate(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_set_capabilities(MigrationCapabilityStatusList *capabilities, Error **errp);
int qmp_marshal_input_migrate_set_capabilities(Monitor *mon, const QDict *qdict, QObject **ret);
MigrationCapabilityStatusList *qmp_query_migrate_capabilities(Error **errp);
int qmp_marshal_input_query_migrate_capabilities(Monitor *mon, const QDict *qdict, QObject **ret);
MouseInfoList *qmp_query_mice(Error **errp);
int qmp_marshal_input_query_mice(Monitor *mon, const QDict *qdict, QObject **ret);
CpuInfoList *qmp_query_cpus(Error **errp);
int qmp_marshal_input_query_cpus(Monitor *mon, const QDict *qdict, QObject **ret);
IOThreadInfoList *qmp_query_iothreads(Error **errp);
int qmp_marshal_input_query_iothreads(Monitor *mon, const QDict *qdict, QObject **ret);
VncInfo *qmp_query_vnc(Error **errp);
int qmp_marshal_input_query_vnc(Monitor *mon, const QDict *qdict, QObject **ret);
VncInfo2List *qmp_query_vnc_servers(Error **errp);
int qmp_marshal_input_query_vnc_servers(Monitor *mon, const QDict *qdict, QObject **ret);
SpiceInfo *qmp_query_spice(Error **errp);
int qmp_marshal_input_query_spice(Monitor *mon, const QDict *qdict, QObject **ret);
BalloonInfo *qmp_query_balloon(Error **errp);
int qmp_marshal_input_query_balloon(Monitor *mon, const QDict *qdict, QObject **ret);
PciInfoList *qmp_query_pci(Error **errp);
int qmp_marshal_input_query_pci(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_quit(Error **errp);
int qmp_marshal_input_quit(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_stop(Error **errp);
int qmp_marshal_input_stop(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_system_reset(Error **errp);
int qmp_marshal_input_system_reset(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_system_powerdown(Error **errp);
int qmp_marshal_input_system_powerdown(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_cpu(int64_t index, Error **errp);
int qmp_marshal_input_cpu(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_cpu_add(int64_t id, Error **errp);
int qmp_marshal_input_cpu_add(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_memsave(int64_t val, int64_t size, const char *filename, bool has_cpu_index, int64_t cpu_index, Error **errp);
int qmp_marshal_input_memsave(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_pmemsave(int64_t val, int64_t size, const char *filename, Error **errp);
int qmp_marshal_input_pmemsave(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_cont(Error **errp);
int qmp_marshal_input_cont(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_system_wakeup(Error **errp);
int qmp_marshal_input_system_wakeup(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_inject_nmi(Error **errp);
int qmp_marshal_input_inject_nmi(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_set_link(const char *name, bool up, Error **errp);
int qmp_marshal_input_set_link(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_balloon(int64_t value, Error **errp);
int qmp_marshal_input_balloon(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_transaction(TransactionActionList *actions, Error **errp);
int qmp_marshal_input_transaction(Monitor *mon, const QDict *qdict, QObject **ret);
char *qmp_human_monitor_command(const char *command_line, bool has_cpu_index, int64_t cpu_index, Error **errp);
int qmp_marshal_input_human_monitor_command(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_cancel(Error **errp);
int qmp_marshal_input_migrate_cancel(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_set_downtime(double value, Error **errp);
int qmp_marshal_input_migrate_set_downtime(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_set_speed(int64_t value, Error **errp);
int qmp_marshal_input_migrate_set_speed(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_set_cache_size(int64_t value, Error **errp);
int qmp_marshal_input_migrate_set_cache_size(Monitor *mon, const QDict *qdict, QObject **ret);
int64_t qmp_query_migrate_cache_size(Error **errp);
int qmp_marshal_input_query_migrate_cache_size(Monitor *mon, const QDict *qdict, QObject **ret);
ObjectPropertyInfoList *qmp_qom_list(const char *path, Error **errp);
int qmp_marshal_input_qom_list(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_set_password(const char *protocol, const char *password, bool has_connected, const char *connected, Error **errp);
int qmp_marshal_input_set_password(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_expire_password(const char *protocol, const char *time, Error **errp);
int qmp_marshal_input_expire_password(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_change_vnc_password(const char *password, Error **errp);
int qmp_marshal_input_change_vnc_password(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_change(const char *device, const char *target, bool has_arg, const char *arg, Error **errp);
int qmp_marshal_input_change(Monitor *mon, const QDict *qdict, QObject **ret);
ObjectTypeInfoList *qmp_qom_list_types(bool has_implements, const char *implements, bool has_abstract, bool abstract, Error **errp);
int qmp_marshal_input_qom_list_types(Monitor *mon, const QDict *qdict, QObject **ret);
DevicePropertyInfoList *qmp_device_list_properties(const char *q_typename, Error **errp);
int qmp_marshal_input_device_list_properties(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate(const char *uri, bool has_blk, bool blk, bool has_inc, bool inc, bool has_detach, bool detach, Error **errp);
int qmp_marshal_input_migrate(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_migrate_incoming(const char *uri, Error **errp);
int qmp_marshal_input_migrate_incoming(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_xen_save_devices_state(const char *filename, Error **errp);
int qmp_marshal_input_xen_save_devices_state(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_xen_set_global_dirty_log(bool enable, Error **errp);
int qmp_marshal_input_xen_set_global_dirty_log(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_device_del(const char *id, Error **errp);
int qmp_marshal_input_device_del(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_dump_guest_memory(bool paging, const char *protocol, bool has_begin, int64_t begin, bool has_length, int64_t length, bool has_format, DumpGuestMemoryFormat format, Error **errp);
int qmp_marshal_input_dump_guest_memory(Monitor *mon, const QDict *qdict, QObject **ret);
DumpGuestMemoryCapability *qmp_query_dump_guest_memory_capability(Error **errp);
int qmp_marshal_input_query_dump_guest_memory_capability(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_netdev_del(const char *id, Error **errp);
int qmp_marshal_input_netdev_del(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_object_del(const char *id, Error **errp);
int qmp_marshal_input_object_del(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_getfd(const char *fdname, Error **errp);
int qmp_marshal_input_getfd(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_closefd(const char *fdname, Error **errp);
int qmp_marshal_input_closefd(Monitor *mon, const QDict *qdict, QObject **ret);
MachineInfoList *qmp_query_machines(Error **errp);
int qmp_marshal_input_query_machines(Monitor *mon, const QDict *qdict, QObject **ret);
CpuDefinitionInfoList *qmp_query_cpu_definitions(Error **errp);
int qmp_marshal_input_query_cpu_definitions(Monitor *mon, const QDict *qdict, QObject **ret);
AddfdInfo *qmp_add_fd(bool has_fdset_id, int64_t fdset_id, bool has_opaque, const char *opaque, Error **errp);
int qmp_marshal_input_add_fd(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_remove_fd(int64_t fdset_id, bool has_fd, int64_t fd, Error **errp);
int qmp_marshal_input_remove_fd(Monitor *mon, const QDict *qdict, QObject **ret);
FdsetInfoList *qmp_query_fdsets(Error **errp);
int qmp_marshal_input_query_fdsets(Monitor *mon, const QDict *qdict, QObject **ret);
TargetInfo *qmp_query_target(Error **errp);
int qmp_marshal_input_query_target(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_send_key(KeyValueList *keys, bool has_hold_time, int64_t hold_time, Error **errp);
int qmp_marshal_input_send_key(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_screendump(const char *filename, Error **errp);
int qmp_marshal_input_screendump(Monitor *mon, const QDict *qdict, QObject **ret);
ChardevReturn *qmp_chardev_add(const char *id, ChardevBackend *backend, Error **errp);
int qmp_marshal_input_chardev_add(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_chardev_remove(const char *id, Error **errp);
int qmp_marshal_input_chardev_remove(Monitor *mon, const QDict *qdict, QObject **ret);
TpmModelList *qmp_query_tpm_models(Error **errp);
int qmp_marshal_input_query_tpm_models(Monitor *mon, const QDict *qdict, QObject **ret);
TpmTypeList *qmp_query_tpm_types(Error **errp);
int qmp_marshal_input_query_tpm_types(Monitor *mon, const QDict *qdict, QObject **ret);
TPMInfoList *qmp_query_tpm(Error **errp);
int qmp_marshal_input_query_tpm(Monitor *mon, const QDict *qdict, QObject **ret);
CommandLineOptionInfoList *qmp_query_command_line_options(bool has_option, const char *option, Error **errp);
int qmp_marshal_input_query_command_line_options(Monitor *mon, const QDict *qdict, QObject **ret);
RxFilterInfoList *qmp_query_rx_filter(bool has_name, const char *name, Error **errp);
int qmp_marshal_input_query_rx_filter(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_x_input_send_event(bool has_console, int64_t console, InputEventList *events, Error **errp);
int qmp_marshal_input_x_input_send_event(Monitor *mon, const QDict *qdict, QObject **ret);
MemdevList *qmp_query_memdev(Error **errp);
int qmp_marshal_input_query_memdev(Monitor *mon, const QDict *qdict, QObject **ret);
MemoryDeviceInfoList *qmp_query_memory_devices(Error **errp);
int qmp_marshal_input_query_memory_devices(Monitor *mon, const QDict *qdict, QObject **ret);
ACPIOSTInfoList *qmp_query_acpi_ospm_status(Error **errp);
int qmp_marshal_input_query_acpi_ospm_status(Monitor *mon, const QDict *qdict, QObject **ret);
void qmp_rtc_reset_reinjection(Error **errp);
int qmp_marshal_input_rtc_reset_reinjection(Monitor *mon, const QDict *qdict, QObject **ret);

#endif
