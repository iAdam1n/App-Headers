/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString;

@interface FBSerpContext : FBGraphQLInput {

	NSString* _clientResultsSessionId;
	NSString* _resultsSource;
	NSString* _experienceType;
	NSString* _tabType;
	NSString* _typeaheadSessionId;
	NSString* _typeaheadCandidateResultsSessionId;

}

@property (nonatomic,copy) NSString * clientResultsSessionId;                          //@synthesize clientResultsSessionId=_clientResultsSessionId - In the implementation block
@property (nonatomic,copy) NSString * resultsSource;                                   //@synthesize resultsSource=_resultsSource - In the implementation block
@property (nonatomic,copy) NSString * experienceType;                                  //@synthesize experienceType=_experienceType - In the implementation block
@property (nonatomic,copy) NSString * tabType;                                         //@synthesize tabType=_tabType - In the implementation block
@property (nonatomic,copy) NSString * typeaheadSessionId;                              //@synthesize typeaheadSessionId=_typeaheadSessionId - In the implementation block
@property (nonatomic,copy) NSString * typeaheadCandidateResultsSessionId;              //@synthesize typeaheadCandidateResultsSessionId=_typeaheadCandidateResultsSessionId - In the implementation block
-(NSString *)tabType;
-(void)setTabType:(NSString *)arg1 ;
-(NSString *)experienceType;
-(void)setTypeaheadSessionId:(NSString *)arg1 ;
-(NSString *)typeaheadSessionId;
-(void)setExperienceType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientResultsSessionId;
-(void)setClientResultsSessionId:(NSString *)arg1 ;
-(NSString *)resultsSource;
-(void)setResultsSource:(NSString *)arg1 ;
-(NSString *)typeaheadCandidateResultsSessionId;
-(void)setTypeaheadCandidateResultsSessionId:(NSString *)arg1 ;
@end
