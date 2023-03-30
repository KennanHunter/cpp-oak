        #include <cmrc/cmrc.hpp>
#include <map>
#include <utility>

namespace cmrc {
namespace depthai {

namespace res_chars {
// These are the files which are available in this resource library
// Pointers to /home/kennan/programming/cpp-oak/build/depthai-core/resources/depthai-device-fwp-8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd.tar.xz
extern const char* const f_f562_depthai_device_fwp_8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd_tar_xz_begin;
extern const char* const f_f562_depthai_device_fwp_8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd_tar_xz_end;
// Pointers to /home/kennan/programming/cpp-oak/build/depthai-core/resources/depthai-bootloader-fwp-0.0.24.tar.xz
extern const char* const f_321d_depthai_bootloader_fwp_0_0_24_tar_xz_begin;
extern const char* const f_321d_depthai_bootloader_fwp_0_0_24_tar_xz_end;
}

namespace {

const cmrc::detail::index_type&
get_root_index() {
    static cmrc::detail::directory root_directory_;
    static cmrc::detail::file_or_directory root_directory_fod{root_directory_};
    static cmrc::detail::index_type root_index;
    root_index.emplace("", &root_directory_fod);
    struct dir_inl {
        class cmrc::detail::directory& directory;
    };
    dir_inl root_directory_dir{root_directory_};
    (void)root_directory_dir;
    
    root_index.emplace(
        "depthai-device-fwp-8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd.tar.xz",
        root_directory_dir.directory.add_file(
            "depthai-device-fwp-8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd.tar.xz",
            res_chars::f_f562_depthai_device_fwp_8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd_tar_xz_begin,
            res_chars::f_f562_depthai_device_fwp_8c3d6ac1c77b0bf7f9ea6fd4d962af37663d2fbd_tar_xz_end
        )
    );
    root_index.emplace(
        "depthai-bootloader-fwp-0.0.24.tar.xz",
        root_directory_dir.directory.add_file(
            "depthai-bootloader-fwp-0.0.24.tar.xz",
            res_chars::f_321d_depthai_bootloader_fwp_0_0_24_tar_xz_begin,
            res_chars::f_321d_depthai_bootloader_fwp_0_0_24_tar_xz_end
        )
    );
    return root_index;
}

}

cmrc::embedded_filesystem get_filesystem() {
    static auto& index = get_root_index();
    return cmrc::embedded_filesystem{index};
}

} // depthai
} // cmrc
    