# Autogenerated with 'bitbake -c update_crates skopos'

# from Cargo.lock
SRC_URI += " \
    crate://crates.io/addr2line/0.24.2 \
    crate://crates.io/adler2/2.0.0 \
    crate://crates.io/aho-corasick/1.1.3 \
    crate://crates.io/anyhow/1.0.98 \
    crate://crates.io/async-broadcast/0.7.2 \
    crate://crates.io/async-channel/2.4.0 \
    crate://crates.io/async-executor/1.13.2 \
    crate://crates.io/async-io/2.4.1 \
    crate://crates.io/async-lock/3.4.0 \
    crate://crates.io/async-process/2.3.1 \
    crate://crates.io/async-recursion/1.1.1 \
    crate://crates.io/async-signal/0.2.11 \
    crate://crates.io/async-task/4.7.1 \
    crate://crates.io/async-trait/0.1.88 \
    crate://crates.io/atomic-waker/1.1.2 \
    crate://crates.io/autocfg/1.4.0 \
    crate://crates.io/axum/0.8.4 \
    crate://crates.io/axum-core/0.5.2 \
    crate://crates.io/backtrace/0.3.75 \
    crate://crates.io/base64/0.22.1 \
    crate://crates.io/bitflags/2.9.1 \
    crate://crates.io/block-buffer/0.10.4 \
    crate://crates.io/blocking/1.6.1 \
    crate://crates.io/bytes/1.10.1 \
    crate://crates.io/cfg-if/1.0.0 \
    crate://crates.io/cfg_aliases/0.2.1 \
    crate://crates.io/concurrent-queue/2.5.0 \
    crate://crates.io/cpufeatures/0.2.17 \
    crate://crates.io/crossbeam-utils/0.8.21 \
    crate://crates.io/crypto-common/0.1.6 \
    crate://crates.io/digest/0.10.7 \
    crate://crates.io/either/1.15.0 \
    crate://crates.io/endi/1.1.0 \
    crate://crates.io/enumflags2/0.7.12 \
    crate://crates.io/enumflags2_derive/0.7.12 \
    crate://crates.io/equivalent/1.0.2 \
    crate://crates.io/errno/0.3.12 \
    crate://crates.io/event-listener/5.4.0 \
    crate://crates.io/event-listener-strategy/0.5.4 \
    crate://crates.io/fastrand/2.3.0 \
    crate://crates.io/fixedbitset/0.5.7 \
    crate://crates.io/fnv/1.0.7 \
    crate://crates.io/futures/0.3.31 \
    crate://crates.io/futures-channel/0.3.31 \
    crate://crates.io/futures-core/0.3.31 \
    crate://crates.io/futures-executor/0.3.31 \
    crate://crates.io/futures-io/0.3.31 \
    crate://crates.io/futures-lite/2.6.0 \
    crate://crates.io/futures-macro/0.3.31 \
    crate://crates.io/futures-sink/0.3.31 \
    crate://crates.io/futures-task/0.3.31 \
    crate://crates.io/futures-util/0.3.31 \
    crate://crates.io/generic-array/0.14.7 \
    crate://crates.io/getrandom/0.3.3 \
    crate://crates.io/gimli/0.31.1 \
    crate://crates.io/h2/0.4.10 \
    crate://crates.io/hashbrown/0.15.4 \
    crate://crates.io/heck/0.5.0 \
    crate://crates.io/hermit-abi/0.5.2 \
    crate://crates.io/hex/0.4.3 \
    crate://crates.io/http/1.3.1 \
    crate://crates.io/http-body/1.0.1 \
    crate://crates.io/http-body-util/0.1.3 \
    crate://crates.io/httparse/1.10.1 \
    crate://crates.io/httpdate/1.0.3 \
    crate://crates.io/hyper/1.6.0 \
    crate://crates.io/hyper-timeout/0.5.2 \
    crate://crates.io/hyper-util/0.1.14 \
    crate://crates.io/indexmap/2.9.0 \
    crate://crates.io/itertools/0.14.0 \
    crate://crates.io/itoa/1.0.15 \
    crate://crates.io/libc/0.2.172 \
    crate://crates.io/linux-raw-sys/0.9.4 \
    crate://crates.io/log/0.4.27 \
    crate://crates.io/matchit/0.8.4 \
    crate://crates.io/memchr/2.7.4 \
    crate://crates.io/memoffset/0.9.1 \
    crate://crates.io/mime/0.3.17 \
    crate://crates.io/miniz_oxide/0.8.8 \
    crate://crates.io/mio/1.0.4 \
    crate://crates.io/multimap/0.10.1 \
    crate://crates.io/nix/0.30.1 \
    crate://crates.io/object/0.36.7 \
    crate://crates.io/once_cell/1.21.3 \
    crate://crates.io/ordered-stream/0.2.0 \
    crate://crates.io/parking/2.2.1 \
    crate://crates.io/percent-encoding/2.3.1 \
    crate://crates.io/petgraph/0.7.1 \
    crate://crates.io/pin-project/1.1.10 \
    crate://crates.io/pin-project-internal/1.1.10 \
    crate://crates.io/pin-project-lite/0.2.16 \
    crate://crates.io/pin-utils/0.1.0 \
    crate://crates.io/piper/0.2.4 \
    crate://crates.io/polling/3.8.0 \
    crate://crates.io/prettyplease/0.2.33 \
    crate://crates.io/proc-macro-crate/3.3.0 \
    crate://crates.io/proc-macro2/1.0.95 \
    crate://crates.io/prost/0.13.5 \
    crate://crates.io/prost-build/0.13.5 \
    crate://crates.io/prost-derive/0.13.5 \
    crate://crates.io/prost-types/0.13.5 \
    crate://crates.io/quote/1.0.40 \
    crate://crates.io/r-efi/5.2.0 \
    crate://crates.io/regex/1.11.1 \
    crate://crates.io/regex-automata/0.4.9 \
    crate://crates.io/regex-syntax/0.8.5 \
    crate://crates.io/rustc-demangle/0.1.24 \
    crate://crates.io/rustix/1.0.7 \
    crate://crates.io/rustversion/1.0.21 \
    crate://crates.io/serde/1.0.219 \
    crate://crates.io/serde_derive/1.0.219 \
    crate://crates.io/serde_repr/0.1.20 \
    crate://crates.io/sha2/0.10.9 \
    crate://crates.io/signal-hook-registry/1.4.5 \
    crate://crates.io/slab/0.4.9 \
    crate://crates.io/smallvec/1.15.1 \
    crate://crates.io/socket2/0.5.10 \
    crate://crates.io/static_assertions/1.1.0 \
    crate://crates.io/syn/2.0.101 \
    crate://crates.io/sync_wrapper/1.0.2 \
    crate://crates.io/tempfile/3.20.0 \
    crate://crates.io/tokio/1.45.1 \
    crate://crates.io/tokio-macros/2.5.0 \
    crate://crates.io/tokio-stream/0.1.17 \
    crate://crates.io/tokio-util/0.7.15 \
    crate://crates.io/toml_datetime/0.6.11 \
    crate://crates.io/toml_edit/0.22.27 \
    crate://crates.io/tonic/0.13.1 \
    crate://crates.io/tonic-build/0.13.1 \
    crate://crates.io/tonic-reflection/0.13.1 \
    crate://crates.io/tower/0.5.2 \
    crate://crates.io/tower-layer/0.3.3 \
    crate://crates.io/tower-service/0.3.3 \
    crate://crates.io/tracing/0.1.41 \
    crate://crates.io/tracing-attributes/0.1.29 \
    crate://crates.io/tracing-core/0.1.34 \
    crate://crates.io/try-lock/0.2.5 \
    crate://crates.io/typenum/1.18.0 \
    crate://crates.io/uds_windows/1.1.0 \
    crate://crates.io/unicode-ident/1.0.18 \
    crate://crates.io/version_check/0.9.5 \
    crate://crates.io/want/0.3.1 \
    crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
    crate://crates.io/wasi/0.14.2+wasi-0.2.4 \
    crate://crates.io/winapi/0.3.9 \
    crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
    crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
    crate://crates.io/windows-sys/0.52.0 \
    crate://crates.io/windows-sys/0.59.0 \
    crate://crates.io/windows-targets/0.52.6 \
    crate://crates.io/windows_aarch64_gnullvm/0.52.6 \
    crate://crates.io/windows_aarch64_msvc/0.52.6 \
    crate://crates.io/windows_i686_gnu/0.52.6 \
    crate://crates.io/windows_i686_gnullvm/0.52.6 \
    crate://crates.io/windows_i686_msvc/0.52.6 \
    crate://crates.io/windows_x86_64_gnu/0.52.6 \
    crate://crates.io/windows_x86_64_gnullvm/0.52.6 \
    crate://crates.io/windows_x86_64_msvc/0.52.6 \
    crate://crates.io/winnow/0.7.11 \
    crate://crates.io/wit-bindgen-rt/0.39.0 \
    crate://crates.io/zbus/5.7.1 \
    crate://crates.io/zbus_macros/5.7.1 \
    crate://crates.io/zbus_names/4.2.0 \
    crate://crates.io/zbus_systemd/0.25701.0 \
    crate://crates.io/zvariant/5.5.3 \
    crate://crates.io/zvariant_derive/5.5.3 \
    crate://crates.io/zvariant_utils/3.2.0 \
"

SRC_URI[addr2line-0.24.2.sha256sum] = "dfbe277e56a376000877090da837660b4427aad530e3028d44e0bffe4f89a1c1"
SRC_URI[adler2-2.0.0.sha256sum] = "512761e0bb2578dd7380c6baaa0f4ce03e84f95e960231d1dec8bf4d7d6e2627"
SRC_URI[aho-corasick-1.1.3.sha256sum] = "8e60d3430d3a69478ad0993f19238d2df97c507009a52b3c10addcd7f6bcb916"
SRC_URI[anyhow-1.0.98.sha256sum] = "e16d2d3311acee920a9eb8d33b8cbc1787ce4a264e85f964c2404b969bdcd487"
SRC_URI[async-broadcast-0.7.2.sha256sum] = "435a87a52755b8f27fcf321ac4f04b2802e337c8c4872923137471ec39c37532"
SRC_URI[async-channel-2.4.0.sha256sum] = "16c74e56284d2188cabb6ad99603d1ace887a5d7e7b695d01b728155ed9ed427"
SRC_URI[async-executor-1.13.2.sha256sum] = "bb812ffb58524bdd10860d7d974e2f01cc0950c2438a74ee5ec2e2280c6c4ffa"
SRC_URI[async-io-2.4.1.sha256sum] = "1237c0ae75a0f3765f58910ff9cdd0a12eeb39ab2f4c7de23262f337f0aacbb3"
SRC_URI[async-lock-3.4.0.sha256sum] = "ff6e472cdea888a4bd64f342f09b3f50e1886d32afe8df3d663c01140b811b18"
SRC_URI[async-process-2.3.1.sha256sum] = "cde3f4e40e6021d7acffc90095cbd6dc54cb593903d1de5832f435eb274b85dc"
SRC_URI[async-recursion-1.1.1.sha256sum] = "3b43422f69d8ff38f95f1b2bb76517c91589a924d1559a0e935d7c8ce0274c11"
SRC_URI[async-signal-0.2.11.sha256sum] = "d7605a4e50d4b06df3898d5a70bf5fde51ed9059b0434b73105193bc27acce0d"
SRC_URI[async-task-4.7.1.sha256sum] = "8b75356056920673b02621b35afd0f7dda9306d03c79a30f5c56c44cf256e3de"
SRC_URI[async-trait-0.1.88.sha256sum] = "e539d3fca749fcee5236ab05e93a52867dd549cc157c8cb7f99595f3cedffdb5"
SRC_URI[atomic-waker-1.1.2.sha256sum] = "1505bd5d3d116872e7271a6d4e16d81d0c8570876c8de68093a09ac269d8aac0"
SRC_URI[autocfg-1.4.0.sha256sum] = "ace50bade8e6234aa140d9a2f552bbee1db4d353f69b8217bc503490fc1a9f26"
SRC_URI[axum-0.8.4.sha256sum] = "021e862c184ae977658b36c4500f7feac3221ca5da43e3f25bd04ab6c79a29b5"
SRC_URI[axum-core-0.5.2.sha256sum] = "68464cd0412f486726fb3373129ef5d2993f90c34bc2bc1c1e9943b2f4fc7ca6"
SRC_URI[backtrace-0.3.75.sha256sum] = "6806a6321ec58106fea15becdad98371e28d92ccbc7c8f1b3b6dd724fe8f1002"
SRC_URI[base64-0.22.1.sha256sum] = "72b3254f16251a8381aa12e40e3c4d2f0199f8c6508fbecb9d91f575e0fbb8c6"
SRC_URI[bitflags-2.9.1.sha256sum] = "1b8e56985ec62d17e9c1001dc89c88ecd7dc08e47eba5ec7c29c7b5eeecde967"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[blocking-1.6.1.sha256sum] = "703f41c54fc768e63e091340b424302bb1c29ef4aa0c7f10fe849dfb114d29ea"
SRC_URI[bytes-1.10.1.sha256sum] = "d71b6127be86fdcfddb610f7182ac57211d4b18a3e9c82eb2d17662f2227ad6a"
SRC_URI[cfg-if-1.0.0.sha256sum] = "baf1de4339761588bc0619e3cbc0120ee582ebb74b53b4efbf79117bd2da40fd"
SRC_URI[cfg_aliases-0.2.1.sha256sum] = "613afe47fcd5fac7ccf1db93babcb082c5994d996f20b8b159f2ad1658eb5724"
SRC_URI[concurrent-queue-2.5.0.sha256sum] = "4ca0197aee26d1ae37445ee532fefce43251d24cc7c166799f4d46817f1d3973"
SRC_URI[cpufeatures-0.2.17.sha256sum] = "59ed5838eebb26a2bb2e58f6d5b5316989ae9d08bab10e0e6d103e656d1b0280"
SRC_URI[crossbeam-utils-0.8.21.sha256sum] = "d0a5c400df2834b80a4c3327b3aad3a4c4cd4de0629063962b03235697506a28"
SRC_URI[crypto-common-0.1.6.sha256sum] = "1bfb12502f3fc46cca1bb51ac28df9d618d813cdc3d2f25b9fe775a34af26bb3"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[either-1.15.0.sha256sum] = "48c757948c5ede0e46177b7add2e67155f70e33c07fea8284df6576da70b3719"
SRC_URI[endi-1.1.0.sha256sum] = "a3d8a32ae18130a3c84dd492d4215c3d913c3b07c6b63c2eb3eb7ff1101ab7bf"
SRC_URI[enumflags2-0.7.12.sha256sum] = "1027f7680c853e056ebcec683615fb6fbbc07dbaa13b4d5d9442b146ded4ecef"
SRC_URI[enumflags2_derive-0.7.12.sha256sum] = "67c78a4d8fdf9953a5c9d458f9efe940fd97a0cab0941c075a813ac594733827"
SRC_URI[equivalent-1.0.2.sha256sum] = "877a4ace8713b0bcf2a4e7eec82529c029f1d0619886d18145fea96c3ffe5c0f"
SRC_URI[errno-0.3.12.sha256sum] = "cea14ef9355e3beab063703aa9dab15afd25f0667c341310c1e5274bb1d0da18"
SRC_URI[event-listener-5.4.0.sha256sum] = "3492acde4c3fc54c845eaab3eed8bd00c7a7d881f78bfc801e43a93dec1331ae"
SRC_URI[event-listener-strategy-0.5.4.sha256sum] = "8be9f3dfaaffdae2972880079a491a1a8bb7cbed0b8dd7a347f668b4150a3b93"
SRC_URI[fastrand-2.3.0.sha256sum] = "37909eebbb50d72f9059c3b6d82c0463f2ff062c9e95845c43a6c9c0355411be"
SRC_URI[fixedbitset-0.5.7.sha256sum] = "1d674e81391d1e1ab681a28d99df07927c6d4aa5b027d7da16ba32d1d21ecd99"
SRC_URI[fnv-1.0.7.sha256sum] = "3f9eec918d3f24069decb9af1554cad7c880e2da24a9afd88aca000531ab82c1"
SRC_URI[futures-0.3.31.sha256sum] = "65bc07b1a8bc7c85c5f2e110c476c7389b4554ba72af57d8445ea63a576b0876"
SRC_URI[futures-channel-0.3.31.sha256sum] = "2dff15bf788c671c1934e366d07e30c1814a8ef514e1af724a602e8a2fbe1b10"
SRC_URI[futures-core-0.3.31.sha256sum] = "05f29059c0c2090612e8d742178b0580d2dc940c837851ad723096f87af6663e"
SRC_URI[futures-executor-0.3.31.sha256sum] = "1e28d1d997f585e54aebc3f97d39e72338912123a67330d723fdbb564d646c9f"
SRC_URI[futures-io-0.3.31.sha256sum] = "9e5c1b78ca4aae1ac06c48a526a655760685149f0d465d21f37abfe57ce075c6"
SRC_URI[futures-lite-2.6.0.sha256sum] = "f5edaec856126859abb19ed65f39e90fea3a9574b9707f13539acf4abf7eb532"
SRC_URI[futures-macro-0.3.31.sha256sum] = "162ee34ebcb7c64a8abebc059ce0fee27c2262618d7b60ed8faf72fef13c3650"
SRC_URI[futures-sink-0.3.31.sha256sum] = "e575fab7d1e0dcb8d0c7bcf9a63ee213816ab51902e6d244a95819acacf1d4f7"
SRC_URI[futures-task-0.3.31.sha256sum] = "f90f7dce0722e95104fcb095585910c0977252f286e354b5e3bd38902cd99988"
SRC_URI[futures-util-0.3.31.sha256sum] = "9fa08315bb612088cc391249efdc3bc77536f16c91f6cf495e6fbe85b20a4a81"
SRC_URI[generic-array-0.14.7.sha256sum] = "85649ca51fd72272d7821adaf274ad91c288277713d9c18820d8499a7ff69e9a"
SRC_URI[getrandom-0.3.3.sha256sum] = "26145e563e54f2cadc477553f1ec5ee650b00862f0a58bcd12cbdc5f0ea2d2f4"
SRC_URI[gimli-0.31.1.sha256sum] = "07e28edb80900c19c28f1072f2e8aeca7fa06b23cd4169cefe1af5aa3260783f"
SRC_URI[h2-0.4.10.sha256sum] = "a9421a676d1b147b16b82c9225157dc629087ef8ec4d5e2960f9437a90dac0a5"
SRC_URI[hashbrown-0.15.4.sha256sum] = "5971ac85611da7067dbfcabef3c70ebb5606018acd9e2a3903a0da507521e0d5"
SRC_URI[heck-0.5.0.sha256sum] = "2304e00983f87ffb38b55b444b5e3b60a884b5d30c0fca7d82fe33449bbe55ea"
SRC_URI[hermit-abi-0.5.2.sha256sum] = "fc0fef456e4baa96da950455cd02c081ca953b141298e41db3fc7e36b1da849c"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[http-1.3.1.sha256sum] = "f4a85d31aea989eead29a3aaf9e1115a180df8282431156e533de47660892565"
SRC_URI[http-body-1.0.1.sha256sum] = "1efedce1fb8e6913f23e0c92de8e62cd5b772a67e7b3946df930a62566c93184"
SRC_URI[http-body-util-0.1.3.sha256sum] = "b021d93e26becf5dc7e1b75b1bed1fd93124b374ceb73f43d4d4eafec896a64a"
SRC_URI[httparse-1.10.1.sha256sum] = "6dbf3de79e51f3d586ab4cb9d5c3e2c14aa28ed23d180cf89b4df0454a69cc87"
SRC_URI[httpdate-1.0.3.sha256sum] = "df3b46402a9d5adb4c86a0cf463f42e19994e3ee891101b1841f30a545cb49a9"
SRC_URI[hyper-1.6.0.sha256sum] = "cc2b571658e38e0c01b1fdca3bbbe93c00d3d71693ff2770043f8c29bc7d6f80"
SRC_URI[hyper-timeout-0.5.2.sha256sum] = "2b90d566bffbce6a75bd8b09a05aa8c2cb1fabb6cb348f8840c9e4c90a0d83b0"
SRC_URI[hyper-util-0.1.14.sha256sum] = "dc2fdfdbff08affe55bb779f33b053aa1fe5dd5b54c257343c17edfa55711bdb"
SRC_URI[indexmap-2.9.0.sha256sum] = "cea70ddb795996207ad57735b50c5982d8844f38ba9ee5f1aedcfb708a2aa11e"
SRC_URI[itertools-0.14.0.sha256sum] = "2b192c782037fadd9cfa75548310488aabdbf3d2da73885b31bd0abd03351285"
SRC_URI[itoa-1.0.15.sha256sum] = "4a5f13b858c8d314ee3e8f639011f7ccefe71f97f96e50151fb991f267928e2c"
SRC_URI[libc-0.2.172.sha256sum] = "d750af042f7ef4f724306de029d18836c26c1765a54a6a3f094cbd23a7267ffa"
SRC_URI[linux-raw-sys-0.9.4.sha256sum] = "cd945864f07fe9f5371a27ad7b52a172b4b499999f1d97574c9fa68373937e12"
SRC_URI[log-0.4.27.sha256sum] = "13dc2df351e3202783a1fe0d44375f7295ffb4049267b0f3018346dc122a1d94"
SRC_URI[matchit-0.8.4.sha256sum] = "47e1ffaa40ddd1f3ed91f717a33c8c0ee23fff369e3aa8772b9605cc1d22f4c3"
SRC_URI[memchr-2.7.4.sha256sum] = "78ca9ab1a0babb1e7d5695e3530886289c18cf2f87ec19a575a0abdce112e3a3"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[mime-0.3.17.sha256sum] = "6877bb514081ee2a7ff5ef9de3281f14a4dd4bceac4c09388074a6b5df8a139a"
SRC_URI[miniz_oxide-0.8.8.sha256sum] = "3be647b768db090acb35d5ec5db2b0e1f1de11133ca123b9eacf5137868f892a"
SRC_URI[mio-1.0.4.sha256sum] = "78bed444cc8a2160f01cbcf811ef18cac863ad68ae8ca62092e8db51d51c761c"
SRC_URI[multimap-0.10.1.sha256sum] = "1d87ecb2933e8aeadb3e3a02b828fed80a7528047e68b4f424523a0981a3a084"
SRC_URI[nix-0.30.1.sha256sum] = "74523f3a35e05aba87a1d978330aef40f67b0304ac79c1c00b294c9830543db6"
SRC_URI[object-0.36.7.sha256sum] = "62948e14d923ea95ea2c7c86c71013138b66525b86bdc08d2dcc262bdb497b87"
SRC_URI[once_cell-1.21.3.sha256sum] = "42f5e15c9953c5e4ccceeb2e7382a716482c34515315f7b03532b8b4e8393d2d"
SRC_URI[ordered-stream-0.2.0.sha256sum] = "9aa2b01e1d916879f73a53d01d1d6cee68adbb31d6d9177a8cfce093cced1d50"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[percent-encoding-2.3.1.sha256sum] = "e3148f5046208a5d56bcfc03053e3ca6334e51da8dfb19b6cdc8b306fae3283e"
SRC_URI[petgraph-0.7.1.sha256sum] = "3672b37090dbd86368a4145bc067582552b29c27377cad4e0a306c97f9bd7772"
SRC_URI[pin-project-1.1.10.sha256sum] = "677f1add503faace112b9f1373e43e9e054bfdd22ff1a63c1bc485eaec6a6a8a"
SRC_URI[pin-project-internal-1.1.10.sha256sum] = "6e918e4ff8c4549eb882f14b3a4bc8c8bc93de829416eacf579f1207a8fbf861"
SRC_URI[pin-project-lite-0.2.16.sha256sum] = "3b3cff922bd51709b605d9ead9aa71031d81447142d828eb4a6eba76fe619f9b"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[piper-0.2.4.sha256sum] = "96c8c490f422ef9a4efd2cb5b42b76c8613d7e7dfc1caf667b8a3350a5acc066"
SRC_URI[polling-3.8.0.sha256sum] = "b53a684391ad002dd6a596ceb6c74fd004fdce75f4be2e3f615068abbea5fd50"
SRC_URI[prettyplease-0.2.33.sha256sum] = "9dee91521343f4c5c6a63edd65e54f31f5c92fe8978c40a4282f8372194c6a7d"
SRC_URI[proc-macro-crate-3.3.0.sha256sum] = "edce586971a4dfaa28950c6f18ed55e0406c1ab88bbce2c6f6293a7aaba73d35"
SRC_URI[proc-macro2-1.0.95.sha256sum] = "02b3e5e68a3a1a02aad3ec490a98007cbc13c37cbe84a3cd7b8e406d76e7f778"
SRC_URI[prost-0.13.5.sha256sum] = "2796faa41db3ec313a31f7624d9286acf277b52de526150b7e69f3debf891ee5"
SRC_URI[prost-build-0.13.5.sha256sum] = "be769465445e8c1474e9c5dac2018218498557af32d9ed057325ec9a41ae81bf"
SRC_URI[prost-derive-0.13.5.sha256sum] = "8a56d757972c98b346a9b766e3f02746cde6dd1cd1d1d563472929fdd74bec4d"
SRC_URI[prost-types-0.13.5.sha256sum] = "52c2c1bf36ddb1a1c396b3601a3cec27c2462e45f07c386894ec3ccf5332bd16"
SRC_URI[quote-1.0.40.sha256sum] = "1885c039570dc00dcb4ff087a89e185fd56bae234ddc7f056a945bf36467248d"
SRC_URI[r-efi-5.2.0.sha256sum] = "74765f6d916ee2faa39bc8e68e4f3ed8949b48cccdac59983d287a7cb71ce9c5"
SRC_URI[regex-1.11.1.sha256sum] = "b544ef1b4eac5dc2db33ea63606ae9ffcfac26c1416a2806ae0bf5f56b201191"
SRC_URI[regex-automata-0.4.9.sha256sum] = "809e8dc61f6de73b46c85f4c96486310fe304c434cfa43669d7b40f711150908"
SRC_URI[regex-syntax-0.8.5.sha256sum] = "2b15c43186be67a4fd63bee50d0303afffcef381492ebe2c5d87f324e1b8815c"
SRC_URI[rustc-demangle-0.1.24.sha256sum] = "719b953e2095829ee67db738b3bfa9fa368c94900df327b3f07fe6e794d2fe1f"
SRC_URI[rustix-1.0.7.sha256sum] = "c71e83d6afe7ff64890ec6b71d6a69bb8a610ab78ce364b3352876bb4c801266"
SRC_URI[rustversion-1.0.21.sha256sum] = "8a0d197bd2c9dc6e53b84da9556a69ba4cdfab8619eb41a8bd1cc2027a0f6b1d"
SRC_URI[serde-1.0.219.sha256sum] = "5f0e2c6ed6606019b4e29e69dbaba95b11854410e5347d525002456dbbb786b6"
SRC_URI[serde_derive-1.0.219.sha256sum] = "5b0276cf7f2c73365f7157c8123c21cd9a50fbbd844757af28ca1f5925fc2a00"
SRC_URI[serde_repr-0.1.20.sha256sum] = "175ee3e80ae9982737ca543e96133087cbd9a485eecc3bc4de9c1a37b47ea59c"
SRC_URI[sha2-0.10.9.sha256sum] = "a7507d819769d01a365ab707794a4084392c824f54a7a6a7862f8c3d0892b283"
SRC_URI[signal-hook-registry-1.4.5.sha256sum] = "9203b8055f63a2a00e2f593bb0510367fe707d7ff1e5c872de2f537b339e5410"
SRC_URI[slab-0.4.9.sha256sum] = "8f92a496fb766b417c996b9c5e57daf2f7ad3b0bebe1ccfca4856390e3d3bb67"
SRC_URI[smallvec-1.15.1.sha256sum] = "67b1b7a3b5fe4f1376887184045fcf45c69e92af734b7aaddc05fb777b6fbd03"
SRC_URI[socket2-0.5.10.sha256sum] = "e22376abed350d73dd1cd119b57ffccad95b4e585a7cda43e286245ce23c0678"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[syn-2.0.101.sha256sum] = "8ce2b7fc941b3a24138a0a7cf8e858bfc6a992e7978a068a5c760deb0ed43caf"
SRC_URI[sync_wrapper-1.0.2.sha256sum] = "0bf256ce5efdfa370213c1dabab5935a12e49f2c58d15e9eac2870d3b4f27263"
SRC_URI[tempfile-3.20.0.sha256sum] = "e8a64e3985349f2441a1a9ef0b853f869006c3855f2cda6862a94d26ebb9d6a1"
SRC_URI[tokio-1.45.1.sha256sum] = "75ef51a33ef1da925cea3e4eb122833cb377c61439ca401b770f54902b806779"
SRC_URI[tokio-macros-2.5.0.sha256sum] = "6e06d43f1345a3bcd39f6a56dbb7dcab2ba47e68e8ac134855e7e2bdbaf8cab8"
SRC_URI[tokio-stream-0.1.17.sha256sum] = "eca58d7bba4a75707817a2c44174253f9236b2d5fbd055602e9d5c07c139a047"
SRC_URI[tokio-util-0.7.15.sha256sum] = "66a539a9ad6d5d281510d5bd368c973d636c02dbf8a67300bfb6b950696ad7df"
SRC_URI[toml_datetime-0.6.11.sha256sum] = "22cddaf88f4fbc13c51aebbf5f8eceb5c7c5a9da2ac40a13519eb5b0a0e8f11c"
SRC_URI[toml_edit-0.22.27.sha256sum] = "41fe8c660ae4257887cf66394862d21dbca4a6ddd26f04a3560410406a2f819a"
SRC_URI[tonic-0.13.1.sha256sum] = "7e581ba15a835f4d9ea06c55ab1bd4dce26fc53752c69a04aac00703bfb49ba9"
SRC_URI[tonic-build-0.13.1.sha256sum] = "eac6f67be712d12f0b41328db3137e0d0757645d8904b4cb7d51cd9c2279e847"
SRC_URI[tonic-reflection-0.13.1.sha256sum] = "f9687bd5bfeafebdded2356950f278bba8226f0b32109537c4253406e09aafe1"
SRC_URI[tower-0.5.2.sha256sum] = "d039ad9159c98b70ecfd540b2573b97f7f52c3e8d9f8ad57a24b916a536975f9"
SRC_URI[tower-layer-0.3.3.sha256sum] = "121c2a6cda46980bb0fcd1647ffaf6cd3fc79a013de288782836f6df9c48780e"
SRC_URI[tower-service-0.3.3.sha256sum] = "8df9b6e13f2d32c91b9bd719c00d1958837bc7dec474d94952798cc8e69eeec3"
SRC_URI[tracing-0.1.41.sha256sum] = "784e0ac535deb450455cbfa28a6f0df145ea1bb7ae51b821cf5e7927fdcfbdd0"
SRC_URI[tracing-attributes-0.1.29.sha256sum] = "1b1ffbcf9c6f6b99d386e7444eb608ba646ae452a36b39737deb9663b610f662"
SRC_URI[tracing-core-0.1.34.sha256sum] = "b9d12581f227e93f094d3af2ae690a574abb8a2b9b7a96e7cfe9647b2b617678"
SRC_URI[try-lock-0.2.5.sha256sum] = "e421abadd41a4225275504ea4d6566923418b7f05506fbc9c0fe86ba7396114b"
SRC_URI[typenum-1.18.0.sha256sum] = "1dccffe3ce07af9386bfd29e80c0ab1a8205a2fc34e4bcd40364df902cfa8f3f"
SRC_URI[uds_windows-1.1.0.sha256sum] = "89daebc3e6fd160ac4aa9fc8b3bf71e1f74fbf92367ae71fb83a037e8bf164b9"
SRC_URI[unicode-ident-1.0.18.sha256sum] = "5a5f39404a5da50712a4c1eecf25e90dd62b613502b7e925fd4e4d19b5c96512"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[want-0.3.1.sha256sum] = "bfa7760aed19e106de2c7c0b581b509f2f25d3dacaf737cb82ac61bc6d760b0e"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[wasi-0.14.2+wasi-0.2.4.sha256sum] = "9683f9a5a998d873c0d21fcbe3c083009670149a8fab228644b8bd36b2c48cb3"
SRC_URI[winapi-0.3.9.sha256sum] = "5c839a674fcd7a98952e593242ea400abe93992746761e38641405d28b00f419"
SRC_URI[winapi-i686-pc-windows-gnu-0.4.0.sha256sum] = "ac3b87c63620426dd9b991e5ce0329eff545bccbbb34f3be09ff6fb6ab51b7b6"
SRC_URI[winapi-x86_64-pc-windows-gnu-0.4.0.sha256sum] = "712e227841d057c1ee1cd2fb22fa7e5a5461ae8e48fa2ca79ec42cfc1931183f"
SRC_URI[windows-sys-0.52.0.sha256sum] = "282be5f36a8ce781fad8c8ae18fa3f9beff57ec1b52cb3de0789201425d9a33d"
SRC_URI[windows-sys-0.59.0.sha256sum] = "1e38bc4d79ed67fd075bcc251a1c39b32a1776bbe92e5bef1f0bf1f8c531853b"
SRC_URI[windows-targets-0.52.6.sha256sum] = "9b724f72796e036ab90c1021d4780d4d3d648aca59e491e6b98e725b84e99973"
SRC_URI[windows_aarch64_gnullvm-0.52.6.sha256sum] = "32a4622180e7a0ec044bb555404c800bc9fd9ec262ec147edd5989ccd0c02cd3"
SRC_URI[windows_aarch64_msvc-0.52.6.sha256sum] = "09ec2a7bb152e2252b53fa7803150007879548bc709c039df7627cabbd05d469"
SRC_URI[windows_i686_gnu-0.52.6.sha256sum] = "8e9b5ad5ab802e97eb8e295ac6720e509ee4c243f69d781394014ebfe8bbfa0b"
SRC_URI[windows_i686_gnullvm-0.52.6.sha256sum] = "0eee52d38c090b3caa76c563b86c3a4bd71ef1a819287c19d586d7334ae8ed66"
SRC_URI[windows_i686_msvc-0.52.6.sha256sum] = "240948bc05c5e7c6dabba28bf89d89ffce3e303022809e73deaefe4f6ec56c66"
SRC_URI[windows_x86_64_gnu-0.52.6.sha256sum] = "147a5c80aabfbf0c7d901cb5895d1de30ef2907eb21fbbab29ca94c5b08b1a78"
SRC_URI[windows_x86_64_gnullvm-0.52.6.sha256sum] = "24d5b23dc417412679681396f2b49f3de8c1473deb516bd34410872eff51ed0d"
SRC_URI[windows_x86_64_msvc-0.52.6.sha256sum] = "589f6da84c646204747d1270a2a5661ea66ed1cced2631d546fdfb155959f9ec"
SRC_URI[winnow-0.7.11.sha256sum] = "74c7b26e3480b707944fc872477815d29a8e429d2f93a1ce000f5fa84a15cbcd"
SRC_URI[wit-bindgen-rt-0.39.0.sha256sum] = "6f42320e61fe2cfd34354ecb597f86f413484a798ba44a8ca1165c58d42da6c1"
SRC_URI[zbus-5.7.1.sha256sum] = "d3a7c7cee313d044fca3f48fa782cb750c79e4ca76ba7bc7718cd4024cdf6f68"
SRC_URI[zbus_macros-5.7.1.sha256sum] = "a17e7e5eec1550f747e71a058df81a9a83813ba0f6a95f39c4e218bdc7ba366a"
SRC_URI[zbus_names-4.2.0.sha256sum] = "7be68e64bf6ce8db94f63e72f0c7eb9a60d733f7e0499e628dfab0f84d6bcb97"
SRC_URI[zbus_systemd-0.25701.0.sha256sum] = "9b772577120750e5a5ab5a5530f38fd462a35fafd9ed475098714afd1b1855ec"
SRC_URI[zvariant-5.5.3.sha256sum] = "9d30786f75e393ee63a21de4f9074d4c038d52c5b1bb4471f955db249f9dffb1"
SRC_URI[zvariant_derive-5.5.3.sha256sum] = "75fda702cd42d735ccd48117b1630432219c0e9616bf6cb0f8350844ee4d9580"
SRC_URI[zvariant_utils-3.2.0.sha256sum] = "e16edfee43e5d7b553b77872d99bc36afdda75c223ca7ad5e3fbecd82ca5fc34"
