/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 7:32:38 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/7A9B3F5D-7CE0-4395-B5B1-42A1050C3CA9/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SocialServiceRequest, NSArray;

@interface SocialServiceRequestMetaData : NSObject {

	SocialServiceRequest* _request;
	NSArray* _services;
	/*^block*/id _handler;

}

@property (nonatomic,retain) SocialServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSArray * services;                          //@synthesize services=_services - In the implementation block
@property (nonatomic,copy) id handler;                                    //@synthesize handler=_handler - In the implementation block
-(void)dealloc;
-(SocialServiceRequest *)request;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)setRequest:(SocialServiceRequest *)arg1 ;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
@end
