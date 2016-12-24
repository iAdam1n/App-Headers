/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:40 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSNumber, NSDictionary;

@interface BITAppVersionMetaInfo : NSObject {

	NSString* _name;
	NSString* _version;
	NSString* _shortVersion;
	NSString* _minOSVersion;
	NSString* _notes;
	NSDate* _date;
	NSNumber* _size;
	NSNumber* _mandatory;
	NSNumber* _versionID;
	NSDictionary* _uuids;

}

@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * shortVersion;              //@synthesize shortVersion=_shortVersion - In the implementation block
@property (nonatomic,copy) NSString * minOSVersion;              //@synthesize minOSVersion=_minOSVersion - In the implementation block
@property (nonatomic,copy) NSString * notes;                     //@synthesize notes=_notes - In the implementation block
@property (nonatomic,copy) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSNumber * size;                      //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber * mandatory;                 //@synthesize mandatory=_mandatory - In the implementation block
@property (nonatomic,copy) NSNumber * versionID;                 //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,copy) NSDictionary * uuids;                 //@synthesize uuids=_uuids - In the implementation block
+(id)appVersionMetaInfoFromDict:(id)arg1 ;
-(void)setMinOSVersion:(NSString *)arg1 ;
-(void)setDateWithTimestamp:(double)arg1 ;
-(void)setMandatory:(NSNumber *)arg1 ;
-(BOOL)isEqualToAppVersionMetaInfo:(id)arg1 ;
-(BOOL)isEqualComparingString:(id)arg1 withString:(id)arg2 ;
-(NSString *)minOSVersion;
-(BOOL)isEqualComparingDate:(id)arg1 withDate:(id)arg2 ;
-(BOOL)isEqualComparingNumber:(id)arg1 withNumber:(id)arg2 ;
-(BOOL)isEqualComparingDictionary:(id)arg1 withDate:(id)arg2 ;
-(id)nameAndVersionString;
-(id)sizeInMB;
-(id)notesOrEmptyString;
-(BOOL)hasUUID:(id)arg1 ;
-(NSNumber *)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isValid;
-(NSDate *)date;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(NSNumber *)versionID;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(id)versionString;
-(id)dateString;
-(NSDictionary *)uuids;
-(void)setUuids:(NSDictionary *)arg1 ;
-(void)setVersionID:(NSNumber *)arg1 ;
-(NSNumber *)mandatory;
-(NSString *)shortVersion;
-(void)setShortVersion:(NSString *)arg1 ;
@end
