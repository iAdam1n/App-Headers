/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBXHostCommand.h>

@class NSString, NSDictionary;

@interface EBXHostAwakeForActivate : EBXHostCommand {

	NSString* _controllerName;
	NSString* _trackingKey;
	NSDictionary* _trackingParams;

}

@property (nonatomic,copy) NSString * controllerName;                    //@synthesize controllerName=_controllerName - In the implementation block
@property (nonatomic,copy) NSString * trackingKey;                       //@synthesize trackingKey=_trackingKey - In the implementation block
@property (nonatomic,retain) NSDictionary * trackingParams;              //@synthesize trackingParams=_trackingParams - In the implementation block
-(NSString *)trackingKey;
-(NSString *)controllerName;
-(void)setControllerName:(NSString *)arg1 ;
-(void)setTrackingKey:(NSString *)arg1 ;
-(void)setTrackingParams:(NSDictionary *)arg1 ;
-(NSDictionary *)trackingParams;
-(id)init;
@end
