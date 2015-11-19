/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary;

@interface ECABTestingManager : NSObject {

	NSDictionary* _tests;

}

@property (retain) NSDictionary * tests;              //@synthesize tests=_tests - In the implementation block
+(void)persistScore:(unsigned long long)arg1 forTestID:(id)arg2 ;
+(void)chooseConfigForTest:(id)arg1 ;
+(id)sortedArrayOfAlternativeConfigNamesForTest:(id)arg1 ;
+(id)settingStringFromDCSForTestID:(id)arg1 ;
+(void)complainAboutDCSValue:(id)arg1 forTestID:(id)arg2 reason:(id)arg3 ;
+(id)parseRawPercentagesFromSettingString:(id)arg1 forTestID:(id)arg2 ;
+(id)sharedABTestingManager;
-(void)setTests:(NSDictionary *)arg1 ;
-(NSDictionary *)tests;
-(void)setPercentagesOnTests;
-(void)setScoresToTests;
-(void)addABTest:(id)arg1 ;
-(id)configForABTestWithID:(id)arg1 configName:(id)arg2 ;
-(void)optOutOfCurrentlyRunTest;
-(void)prepare;
-(id)init;
@end

