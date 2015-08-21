/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSString, TFNHashflag;

@interface TFNTwitterEntityHashflag : NSObject {

	NSString* _hashtag;
	TFNHashflag* _hashflag;
	NSRange _rangeValue;

}

@property (nonatomic,readonly) NSRange rangeValue;                  //@synthesize rangeValue=_rangeValue - In the implementation block
@property (nonatomic,readonly) NSString * hashtag;                  //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,readonly) TFNHashflag * hashflag;              //@synthesize hashflag=_hashflag - In the implementation block
-(NSString *)hashtag;
-(id)initWithRangeValue:(NSRange)arg1 hashtag:(id)arg2 hashflag:(id)arg3 ;
-(TFNHashflag *)hashflag;
-(NSRange)rangeValue;
@end

