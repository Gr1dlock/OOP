#include "controller.h"


int control(MainScene &main_scene, const CurAction &act, ActionType type)
{
    static Model frame_model = initModel();
    int rc = OK;
    switch(type)
    {
    case OPEN:
        rc = readModel(frame_model, act.stream_name);
        break;
    case SAVE:
        rc = saveModel(frame_model, act.stream_name);
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
        rc = clearModel(frame_model);
        break;
    default:
        rc = ERR_PARAM;
        break;
    }
    return rc;
}
