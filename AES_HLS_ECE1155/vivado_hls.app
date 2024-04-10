<project xmlns="com.autoesl.autopilot.project" name="AES_HLS_ECE1155" top="aes128_encrypt_block_hw">
    <includePaths/>
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" csimMode="2" lastCsimMode="2"/>
    </Simulation>
    <files xmlns="">
        <file name="../src/aes_test.cpp" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="AES_HLS_ECE1155/src/aes_sw.hpp" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="AES_HLS_ECE1155/src/aes_sw.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="AES_HLS_ECE1155/src/aes_hw.hpp" sc="0" tb="false" cflags="" blackbox="false"/>
        <file name="AES_HLS_ECE1155/src/aes_hw.cpp" sc="0" tb="false" cflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status="active"/>
    </solutions>
</project>

