/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:55:58 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/0B7DB34E-BB82-4F37-8A66-6BE47C274E80/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface PTHTweetbotTwitterConfiguration : NSObject {

	unsigned long long _httpLength;
	unsigned long long _httpsLength;
	unsigned long long _photoSizeLimit;
	NSArray* _nonUsernamePaths;

}

@property (assign,nonatomic) unsigned long long httpLength;                  //@synthesize httpLength=_httpLength - In the implementation block
@property (assign,nonatomic) unsigned long long httpsLength;                 //@synthesize httpsLength=_httpsLength - In the implementation block
@property (assign,nonatomic) unsigned long long photoSizeLimit;              //@synthesize photoSizeLimit=_photoSizeLimit - In the implementation block
@property (nonatomic,copy) NSArray * nonUsernamePaths;                       //@synthesize nonUsernamePaths=_nonUsernamePaths - In the implementation block
+(id)sharedConfiguration;
-(unsigned long long)httpLength;
-(unsigned long long)httpsLength;
-(void)setNonUsernamePaths:(NSArray *)arg1 ;
-(void)setHttpLength:(unsigned long long)arg1 ;
-(void)setHttpsLength:(unsigned long long)arg1 ;
-(unsigned long long)photoSizeLimit;
-(void)setPhotoSizeLimit:(unsigned long long)arg1 ;
-(NSArray *)nonUsernamePaths;
-(void)updateConfigurationIfNeeded;
-(id)init;
-(void)updateWithDictionary:(id)arg1 ;
@end

