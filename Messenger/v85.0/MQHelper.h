/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface MQHelper : NSObject
+(SCNMatrix4)oldModelMatrix;
+(SCNVector3)transformVector3:(SCNVector3)arg1 m:(SCNMatrix4)arg2 ;
+(float)getLeftEyeHeight:(id)arg1 ;
+(float)getRightEyeHeight:(id)arg1 ;
+(SCNMatrix4)zUpModelTransform;
+(void)checkErrorWithTag:(id)arg1 ;
+(SCNVector3)transformPositionWithX:(double)arg1 y:(double)arg2 z:(double)arg3 m:(SCNMatrix4)arg4 ;
+(void)checkFrameBufferStatue:(unsigned)arg1 ;
+(void)dumpRenderbufferInfo;
@end
