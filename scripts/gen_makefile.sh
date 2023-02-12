mkdir -p ../build
pushd ../build

cmake -DCMAKE_PREFIX_PATH=/packages/omg-pytorch-mac-arm64/torch/ -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..

popd
