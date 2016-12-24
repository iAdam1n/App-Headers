/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PTHTweetbotTwitterConfiguration : NSObject {

	unsigned long long _httpsLength;
	unsigned long long _mediaLength;
	unsigned long long _photoSizeLimit;
	NSArray* _nonUsernamePaths;
	unsigned long long _httpLength;

}

@property (assign,nonatomic) unsigned long long httpLength;                  //@synthesize httpLength=_httpLength - In the implementation block
@property (assign,nonatomic) unsigned long long httpsLength;                 //@synthesize httpsLength=_httpsLength - In the implementation block
@property (assign,nonatomic) unsigned long long photoSizeLimit;              //@synthesize photoSizeLimit=_photoSizeLimit - In the implementation block
@property (nonatomic,copy) NSArray * nonUsernamePaths;                       //@synthesize nonUsernamePaths=_nonUsernamePaths - In the implementation block
@property (nonatomic,readonly) unsigned long long mediaLength;               //@synthesize mediaLength=_mediaLength - In the implementation block
+(id)sharedConfiguration;
-(unsigned long long)httpsLength;
-(void)setNonUsernamePaths:(NSArray *)arg1 ;
-(void)setHttpsLength:(unsigned long long)arg1 ;
-(unsigned long long)mediaLength;
-(unsigned long long)photoSizeLimit;
-(void)setPhotoSizeLimit:(unsigned long long)arg1 ;
-(NSArray *)nonUsernamePaths;
-(unsigned long long)httpLength;
-(void)setHttpLength:(unsigned long long)arg1 ;
-(void)updateConfigurationIfNeeded;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
@end
