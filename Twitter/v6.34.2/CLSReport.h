/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/CLSCrashReport.h>

@class NSString, NSDictionary, NSDate, CLSInternalReport;

@interface CLSReport : NSObject <CLSCrashReport> {

	CLSInternalReport* _internalReport;
	unsigned _internalKVCounter;
	BOOL _isCrash;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
@property (nonatomic,readonly) BOOL isCrash;                                          //@synthesize isCrash=_isCrash - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * userName; 
@property (nonatomic,copy) NSString * userEmail; 
@property (nonatomic,readonly) CLSInternalReport * internalReport;                    //@synthesize internalReport=_internalReport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * crashedOnDate; 
-(NSDate *)crashedOnDate;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)customKeys;
-(NSString *)OSBuildVersion;
-(id)initWithInternalReport:(id)arg1 ;
-(CLSInternalReport *)internalReport;
-(SCD_Struct_CL75)internalKVStorage;
-(void)recordValue:(id)arg1 forInternalKey:(id)arg2 ;
-(BOOL)isCrash;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(NSString *)userIdentifier;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)bundleVersion;
-(void)setUserEmail:(NSString *)arg1 ;
-(NSString *)userEmail;
-(NSString *)OSVersion;
-(NSDate *)dateCreated;
-(NSString *)bundleShortVersionString;
@end
