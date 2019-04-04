#include "controller.h"


int control(MainScene &main_scene, const CurAction &act, ActionType type)
{
    static Model frame_model = initModel();
    int rc = OK;
    switch(type)
    {
    case OPEN:
        rc = readFile(frame_model, act.filename);
        break;
    case SAVE:
        rc = saveFile(frame_model, act.filename);
        break;
    case ROTATE:
        rc = rotateModel(frame_model, act.rotate);
        break;
    case TRANSFER:
        rc = transferModel(frame_model, act.transfer);
        break;
    case SCALE:
        rc = scaleModel(frame_model, act.scale);
        break;
    case DRAW:
        rc = drawModel(main_scene, frame_model);
        break;
    case CLEAR:
        rc = clearScene(main_scene, frame_model);
        break;
    default:
        rc = ERR_PARAM;
        break;
    }
    return rc;
}
