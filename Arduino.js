
async function onConnectUsb() {
  if (navigator.serial) {
    port = await navigator.serial.requestPort();
  await port.open({ baudRate: 115200 });

  const textEncoder = new TextEncoderStream();
  const StreamClosed = textEncoder.readable.pipeTo(port.writable);

  const writer = textEncoder.writable.getWriter();
  writer.releaseLock();
  }else{
    alert("You should connect to the USB");
  }

  
  
}