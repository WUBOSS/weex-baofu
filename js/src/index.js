

const WeexBaofu = {
  show() {
      alert("module WeexBaofu is created sucessfully ")
  }
};


var meta = {
   WeexBaofu: [{
    name: 'show',
    args: []
  }]
};



if(window.Vue) {
  weex.registerModule('WeexBaofu', WeexBaofu);
}

function init(weex) {
  weex.registerApiModule('WeexBaofu', WeexBaofu, meta);
}
module.exports = {
  init:init
};
