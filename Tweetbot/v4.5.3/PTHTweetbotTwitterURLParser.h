/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface PTHTweetbotTwitterURLParser : NSObject {

	NSURL* _url;
	long long _type;
	long long _statusTID;
	NSString* _screenName;
	NSString* _listSlug;
	NSString* _query;
	long long _collectionTID;

}

@property (nonatomic,retain) NSURL * url;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long statusTID;                  //@synthesize statusTID=_statusTID - In the implementation block
@property (nonatomic,readonly) NSString * screenName;                //@synthesize screenName=_screenName - In the implementation block
@property (nonatomic,readonly) NSString * listSlug;                  //@synthesize listSlug=_listSlug - In the implementation block
@property (nonatomic,readonly) NSString * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) long long collectionTID;              //@synthesize collectionTID=_collectionTID - In the implementation block
-(long long)statusTID;
-(NSString *)listSlug;
-(long long)collectionTID;
-(id)init;
-(NSURL *)url;
-(NSString *)query;
-(long long)type;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)screenName;
@end
