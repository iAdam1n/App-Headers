/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
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
-(id)init;
-(void)dealloc;
-(id)openForClient:(id)arg1 ;
@end
