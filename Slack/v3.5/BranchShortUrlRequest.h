/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/BNCServerRequest.h>

@class NSArray, NSString, NSDictionary, BNCLinkCache, BNCLinkData;

@interface BranchShortUrlRequest : BNCServerRequest {

	NSArray* _tags;
	NSString* _alias;
	unsigned long long _type;
	long long _matchDuration;
	NSString* _channel;
	NSString* _feature;
	NSString* _stage;
	NSDictionary* _params;
	BNCLinkCache* _linkCache;
	BNCLinkData* _linkData;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSArray * tags;                        //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSString * alias;                      //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long matchDuration;               //@synthesize matchDuration=_matchDuration - In the implementation block
@property (nonatomic,retain) NSString * channel;                    //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * feature;                    //@synthesize feature=_feature - In the implementation block
@property (nonatomic,retain) NSString * stage;                      //@synthesize stage=_stage - In the implementation block
@property (nonatomic,retain) NSDictionary * params;                 //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) BNCLinkCache * linkCache;              //@synthesize linkCache=_linkCache - In the implementation block
@property (nonatomic,retain) BNCLinkData * linkData;                //@synthesize linkData=_linkData - In the implementation block
@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
-(void)setParams:(NSDictionary *)arg1 ;
-(void)setLinkCache:(BNCLinkCache *)arg1 ;
-(BNCLinkCache *)linkCache;
-(id)initWithTags:(id)arg1 alias:(id)arg2 type:(unsigned long long)arg3 matchDuration:(long long)arg4 channel:(id)arg5 feature:(id)arg6 stage:(id)arg7 params:(id)arg8 linkData:(id)arg9 linkCache:(id)arg10 callback:(/*^block*/id)arg11 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setMatchDuration:(long long)arg1 ;
-(long long)matchDuration;
-(BNCLinkData *)linkData;
-(id)createLongUrlForUserUrl:(id)arg1 ;
-(void)setLinkData:(BNCLinkData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSArray *)tags;
-(NSString *)stage;
-(void)setStage:(NSString *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSString *)feature;
-(void)setAlias:(NSString *)arg1 ;
-(NSString *)alias;
-(void)setFeature:(NSString *)arg1 ;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(NSDictionary *)params;
-(void)setTags:(NSArray *)arg1 ;
@end

