/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface CBAdUnitFileData : NSObject {

	NSString* _ID;
	NSString* _type;
	NSString* _folder;
	NSString* _URLString;
	unsigned long long _state;
	unsigned long long _failures;
	long long _priority;
	unsigned long long _bytes;
	NSDate* _lastModified;

}

@property (nonatomic,retain) NSString * ID;                            //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSString * type;                          //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * folder;                        //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain) NSString * URLString;                     //@synthesize URLString=_URLString - In the implementation block
@property (assign,nonatomic) unsigned long long state;                 //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long failures;              //@synthesize failures=_failures - In the implementation block
@property (assign,nonatomic) long long priority;                       //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) unsigned long long bytes;                 //@synthesize bytes=_bytes - In the implementation block
@property (nonatomic,retain) NSDate * lastModified;                    //@synthesize lastModified=_lastModified - In the implementation block
-(void)setAgeToNow;
-(void)setAgeToLastModified;
-(id)initWithExistingFile:(id)arg1 type:(id)arg2 ;
-(id)initWithCategoryResponse:(id)arg1 category:(id)arg2 ;
-(void)downloadFail;
-(void)downloadSuccess;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(unsigned long long)bytes;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)URLString;
-(id)initWithResponse:(id)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
-(BOOL)exists;
-(NSString *)ID;
-(BOOL)failed;
-(NSString *)folder;
-(void)setFolder:(NSString *)arg1 ;
-(void)setBytes:(unsigned long long)arg1 ;
-(void)setSize;
-(void)setID:(NSString *)arg1 ;
-(void)setFailures:(unsigned long long)arg1 ;
-(unsigned long long)failures;
-(NSDate *)lastModified;
-(void)setLastModified:(NSDate *)arg1 ;
@end
