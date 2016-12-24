/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPMessage.h>

@class NSArray;

@interface SKPLegacyMigrationMessage : SKPMessage {

	long long _migrationType;
	NSArray* _contacts;

}

@property (assign,nonatomic) long long migrationType;              //@synthesize migrationType=_migrationType - In the implementation block
@property (nonatomic,copy) NSArray * contacts;                     //@synthesize contacts=_contacts - In the implementation block
+(id)transformValue:(id)arg1 forKeyPath:(id)arg2 wasTransformed:(BOOL*)arg3 ;
+(id)propertyMapping;
-(id)attributedSummary;
-(void)initializeObject;
-(void)setMigrationType:(long long)arg1 ;
-(long long)migrationType;
-(long long)type;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
@end
