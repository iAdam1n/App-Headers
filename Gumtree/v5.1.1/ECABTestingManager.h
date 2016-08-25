/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface ECABTestingManager : NSObject {

	NSDictionary* _tests;

}

@property (nonatomic,retain) NSDictionary * tests;              //@synthesize tests=_tests - In the implementation block
+(id)sortedArrayOfAlternativeConfigNamesForTest:(id)arg1 ;
+(id)settingStringFromDCSForTestID:(id)arg1 ;
+(void)complainAboutDCSValue:(id)arg1 forTestID:(id)arg2 reason:(id)arg3 ;
+(id)parseRawPercentagesFromSettingString:(id)arg1 forTestID:(id)arg2 ;
+(void)persistScore:(unsigned long long)arg1 forTestID:(id)arg2 ;
+(void)chooseConfigForTest:(id)arg1 ;
+(id)sharedABTestingManager;
-(void)setTests:(NSDictionary *)arg1 ;
-(void)setPercentagesOnTests;
-(void)setScoresToTests;
-(void)optOutOfCurrentlyRunTest;
-(NSDictionary *)tests;
-(id)configForABTestWithID:(id)arg1 configName:(id)arg2 ;
-(void)addABTest:(id)arg1 ;
-(id)init;
-(void)prepare;
@end

