/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation, NSDate, NSMutableDictionary;

@interface TSKeywordMap : NSObject {

	int _gender;
	CLLocation* _location;
	NSDate* _birthday;
	NSMutableDictionary* _customKeywordsDict;

}

@property (assign,nonatomic) int gender;                                            //@synthesize gender=_gender - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSDate * birthday;                                     //@synthesize birthday=_birthday - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * customKeywordsDict;              //@synthesize customKeywordsDict=_customKeywordsDict - In the implementation block
-(void)setBirthdayWithMonth:(long long)arg1 day:(long long)arg2 year:(long long)arg3 ;
-(NSMutableDictionary *)customKeywordsDict;
-(void)setCustomKeywordsDict:(NSMutableDictionary *)arg1 ;
-(id)resolveGenderString:(int)arg1 ;
-(id)resolveEncodedCustomKeywordsMap:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)description;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(NSDate *)birthday;
-(void)setBirthday:(NSDate *)arg1 ;
@end
