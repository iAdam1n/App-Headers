/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Crystal/Crystal-Structs.h>
#import <Crystal/CLSCrashReport.h>

@class NSString, NSDictionary, NSDate, CLSInternalReport;

@interface CLSReport : NSObject <CLSCrashReport> {

	CLSInternalReport* _internalReport;
	unsigned _internalKVCounter;
	unsigned _userKVCounter;
	NSString* _internalCompactedKVFile;
	NSString* _internalIncrementalKVFile;
	NSString* _userCompactedKVFile;
	NSString* _userIncrementalKVFile;

}

@property (nonatomic,readonly) CLSInternalReport * internalReport;                    //@synthesize internalReport=_internalReport - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
@property (nonatomic,readonly) BOOL isCrash; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,copy) NSString * userEmail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * crashedOnDate; 
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithInternalReport:(id)arg1 ;
-(BOOL)isCrash;
-(CLSInternalReport *)internalReport;
-(SCD_Struct_CL10)internalKVStorage;
-(SCD_Struct_CL10)userKVStorage;
-(NSString *)OSBuildVersion;
-(void)recordValue:(id)arg1 forUserKey:(id)arg2 ;
-(void)recordValue:(id)arg1 forInternalKey:(id)arg2 ;
-(NSDictionary *)customKeys;
-(NSDate *)crashedOnDate;
-(NSString *)userName;
-(NSString *)identifier;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setUserName:(NSString *)arg1 ;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)bundleShortVersionString;
-(NSDate *)dateCreated;
-(NSString *)OSVersion;
-(NSString *)userIdentifier;
@end
