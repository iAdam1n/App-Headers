/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface RLCameraControlManager : NSObject {

	NSMutableSet* cameras;

}
+(BOOL)canFocus:(BOOL)arg1 ;
+(BOOL)hasTorch:(BOOL)arg1 ;
+(BOOL)hasFrontAndBackCameras;
+(id)sharedInstance;
-(void)removeCamera:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)openForClient:(id)arg1 ;
@end
