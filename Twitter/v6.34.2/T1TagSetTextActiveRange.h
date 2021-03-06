/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNActiveTextRange.h>

@class NSString, TFNTwitterTag;

@interface T1TagSetTextActiveRange : NSObject <TFNActiveTextRange> {

	NSRange _rangeValue;
	NSString* _displayString;
	TFNTwitterTag* _tag;

}

@property (nonatomic,readonly) TFNTwitterTag * tag;                   //@synthesize tag=_tag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSRange rangeValue; 
@property (nonatomic,readonly) long long rangeFlavor; 
@property (nonatomic,readonly) NSString * displayString; 
-(long long)rangeFlavor;
-(id)initWithTag:(id)arg1 displayString:(id)arg2 range:(NSRange)arg3 ;
-(NSString *)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSRange)rangeValue;
-(TFNTwitterTag *)tag;
@end

