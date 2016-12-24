/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSettingsStoreExternal;
@class FBUserSession, NSURL, NSArray;

@interface FBSettingsSchema : NSObject {

	FBUserSession* _session;
	id<FBSettingsStoreExternal> _externalStoreDelegate;
	NSURL* _baseFileURL;
	NSArray* _schemaStore;

}

@property (nonatomic,retain) NSArray * schemaStore;                                                 //@synthesize schemaStore=_schemaStore - In the implementation block
@property (nonatomic,copy,readonly) NSURL * baseFileURL;                                            //@synthesize baseFileURL=_baseFileURL - In the implementation block
@property (assign,nonatomic,__weak) id<FBSettingsStoreExternal> storeExternalDelegate;              //@synthesize externalStoreDelegate=_externalStoreDelegate - In the implementation block
-(void)setStoreExternalDelegate:(id<FBSettingsStoreExternal>)arg1 ;
-(long long)numberOfRowInSection:(unsigned long long)arg1 ;
-(id)dataInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2 ;
-(id)initWithBaseFileURL:(id)arg1 fileName:(id)arg2 session:(id)arg3 ;
-(void)reloadSettingFromStore;
-(id)titleForFooterInSection:(unsigned long long)arg1 ;
-(NSURL *)baseFileURL;
-(id<FBSettingsStoreExternal>)storeExternalDelegate;
-(void)formatToTableData:(id)arg1 ;
-(void)setSchemaStore:(NSArray *)arg1 ;
-(id)initWithFileFromMainBundle:(id)arg1 session:(id)arg2 ;
-(NSArray *)schemaStore;
-(long long)numberOfSections;
-(void)synchronize:(BOOL)arg1 ;
-(id)titleForHeaderInSection:(unsigned long long)arg1 ;
@end
