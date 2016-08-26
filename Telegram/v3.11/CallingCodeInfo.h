/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString, NSMutableArray;

@interface CallingCodeInfo : NSObject {

	NSSet* _countries;
	NSString* _callingCode;
	NSMutableArray* _trunkPrefixes;
	NSMutableArray* _intlPrefixes;
	NSMutableArray* _ruleSets;
	NSMutableArray* _formatStrings;

}

@property (nonatomic,retain) NSSet * countries;                           //@synthesize countries=_countries - In the implementation block
@property (nonatomic,retain) NSString * callingCode;                      //@synthesize callingCode=_callingCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * trunkPrefixes;              //@synthesize trunkPrefixes=_trunkPrefixes - In the implementation block
@property (nonatomic,retain) NSMutableArray * intlPrefixes;               //@synthesize intlPrefixes=_intlPrefixes - In the implementation block
@property (nonatomic,retain) NSMutableArray * ruleSets;                   //@synthesize ruleSets=_ruleSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * formatStrings;              //@synthesize formatStrings=_formatStrings - In the implementation block
-(NSMutableArray *)intlPrefixes;
-(NSMutableArray *)trunkPrefixes;
-(NSString *)callingCode;
-(id)matchingTrunkCode:(id)arg1 ;
-(NSMutableArray *)ruleSets;
-(id)matchingAccessCode:(id)arg1 ;
-(id)format:(id)arg1 ;
-(void)setCallingCode:(NSString *)arg1 ;
-(void)setTrunkPrefixes:(NSMutableArray *)arg1 ;
-(void)setIntlPrefixes:(NSMutableArray *)arg1 ;
-(void)setRuleSets:(NSMutableArray *)arg1 ;
-(void)setFormatStrings:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setCountries:(NSSet *)arg1 ;
-(NSSet *)countries;
-(NSMutableArray *)formatStrings;
@end
