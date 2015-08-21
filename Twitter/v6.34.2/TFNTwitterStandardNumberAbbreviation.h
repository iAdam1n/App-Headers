/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterNumberAbbreviation.h>

@protocol TFNTwitterNumberAbbreviation;
@class NSNumberFormatter, NSString;

@interface TFNTwitterStandardNumberAbbreviation : NSObject <TFNTwitterNumberAbbreviation> {

	long long _maximumLength;
	NSNumberFormatter* _formatter;
	id<TFNTwitterNumberAbbreviation> _fallback;

}

@property (assign,nonatomic) long long maximumLength;                                //@synthesize maximumLength=_maximumLength - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * formatter;                          //@synthesize formatter=_formatter - In the implementation block
@property (nonatomic,retain) id<TFNTwitterNumberAbbreviation> fallback;              //@synthesize fallback=_fallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_unitForOrder:(unsigned long long)arg1 ;
-(id)abbreviatedStringForNumber:(id)arg1 ;
-(void)setMaximumLength:(long long)arg1 ;
-(BOOL)_hasValidUnits;
-(id<TFNTwitterNumberAbbreviation>)fallback;
-(id)shortUnitForThousands;
-(id)shortUnitForMillions;
-(id)initWithMaximumLength:(long long)arg1 fallback:(id)arg2 ;
-(void)setFallback:(id<TFNTwitterNumberAbbreviation>)arg1 ;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(long long)maximumLength;
@end

