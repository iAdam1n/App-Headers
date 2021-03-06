/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSDate;

@interface CLSInternalReport : NSObject {

	NSString* _identifier;
	NSString* _path;
	NSArray* _metadataSections;

}

@property (nonatomic,copy,readonly) NSString * directoryName; 
@property (nonatomic,copy) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL needsToBeSubmitted; 
@property (nonatomic,copy,readonly) NSString * binaryImagePath; 
@property (nonatomic,copy,readonly) NSString * metadataPath; 
@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,readonly) BOOL isCrash; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
+(id)readMetadataAtPath:(id)arg1 ;
+(id)reportWithPath:(id)arg1 ;
-(BOOL)checkExistenceOfAtLeastOnceFileInArray:(id)arg1 ;
-(id)crashFilenames;
-(id)metadataSections;
-(NSString *)directoryName;
-(NSString *)binaryImagePath;
-(void)enumerateSymbolicatableFilesInContent:(/*^block*/id)arg1 ;
-(NSString *)APIKey;
-(BOOL)isCrash;
-(id)initWithPath:(id)arg1 executionIdentifier:(id)arg2 ;
-(BOOL)needsToBeSubmitted;
-(id)pathForContentFile:(id)arg1 ;
-(NSString *)OSBuildVersion;
-(NSDictionary *)customKeys;
-(NSString *)identifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)bundleShortVersionString;
-(NSDate *)dateCreated;
-(NSString *)OSVersion;
-(NSString *)metadataPath;
@end

