/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/TWTRTimelineDataSource.h>

@class TWTRAPIClient, NSString;

@interface TWTRListTimelineDataSource : NSObject <TWTRTimelineDataSource> {

	BOOL _includeRetweets;
	TWTRAPIClient* _APIClient;
	NSString* _listID;
	NSString* _listSlug;
	NSString* _listOwnerScreenName;
	unsigned long long _maxTweetsPerRequest;

}

@property (nonatomic,copy,readonly) NSString * listID;                              //@synthesize listID=_listID - In the implementation block
@property (nonatomic,copy,readonly) NSString * listSlug;                            //@synthesize listSlug=_listSlug - In the implementation block
@property (nonatomic,copy,readonly) NSString * listOwnerScreenName;                 //@synthesize listOwnerScreenName=_listOwnerScreenName - In the implementation block
@property (nonatomic,readonly) unsigned long long maxTweetsPerRequest;              //@synthesize maxTweetsPerRequest=_maxTweetsPerRequest - In the implementation block
@property (nonatomic,readonly) BOOL includeRetweets;                                //@synthesize includeRetweets=_includeRetweets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long timelineType; 
@property (nonatomic,retain) TWTRAPIClient * APIClient;                             //@synthesize APIClient=_APIClient - In the implementation block
-(id)initWithListID:(id)arg1 listSlug:(id)arg2 listOwnerScreenName:(id)arg3 APIClient:(id)arg4 maxTweetsPerRequest:(unsigned long long)arg5 includeRetweets:(BOOL)arg6 ;
-(id)queryParametersWithMaxPosition:(id)arg1 ;
-(TWTRAPIClient *)APIClient;
-(NSString *)listSlug;
-(NSString *)listOwnerScreenName;
-(unsigned long long)maxTweetsPerRequest;
-(BOOL)includeRetweets;
-(void)loadPreviousTweetsBeforePosition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAPIClient:(TWTRAPIClient *)arg1 ;
-(id)initWithListID:(id)arg1 APIClient:(id)arg2 ;
-(id)initWithListSlug:(id)arg1 listOwnerScreenName:(id)arg2 APIClient:(id)arg3 ;
-(unsigned long long)timelineType;
-(NSString *)listID;
@end
