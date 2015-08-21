/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSArray, NSDictionary;

@interface FBNativeThirdPartyURLCacheElement : NSObject {

	NSURL* _fbrpc;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	NSDictionary* _extras;

}

@property (nonatomic,retain) NSURL * fbrpc;                      //@synthesize fbrpc=_fbrpc - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy) NSArray * trackingNodes;              //@synthesize trackingNodes=_trackingNodes - In the implementation block
@property (nonatomic,copy) NSDictionary * extras;                //@synthesize extras=_extras - In the implementation block
-(NSArray *)trackingCodes;
-(NSArray *)trackingNodes;
-(NSDictionary *)extras;
-(void)setExtras:(NSDictionary *)arg1 ;
-(NSURL *)fbrpc;
-(void)setFbrpc:(NSURL *)arg1 ;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)setTrackingNodes:(NSArray *)arg1 ;
@end

