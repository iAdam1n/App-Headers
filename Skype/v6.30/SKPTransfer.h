/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPALEMappedObject.h>

@class NSString;

@interface SKPTransfer : SKPALEMappedObject {

	unsigned long long _status;
	unsigned long long _type;
	NSString* _path;
	NSString* _filename;
	long long _index;

}

@property (nonatomic,readonly) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * filename;                    //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) long long index;                        //@synthesize index=_index - In the implementation block
+(id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(BOOL*)arg3 ;
+(Class)associatedALEClass;
+(id)propertyMapping;
-(void)initializeALEObjectWithObjectId:(unsigned long long)arg1 ;
-(void)initializeObject;
-(void)cancel;
-(unsigned long long)type;
-(NSString *)path;
-(void)resume;
-(long long)index;
-(void)pause;
-(unsigned long long)status;
-(NSString *)filename;
-(void)accept;
@end
