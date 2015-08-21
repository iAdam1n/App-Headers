/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContactImporterAddressBookReaderDelegate.h>
#import <Messenger/FBContactImporterNetworkerDelegate.h>

@class FBUserSession, FBContactImporterAddressBookReader, FBContactImporterNetworker, NSArray, NSMutableSet, NSMutableArray, NSMutableDictionary, NSDictionary, NSString, FBContactImporterRevampModelListenerAnnouncer, NSSet;

@interface FBContactImporterRevampModel : NSObject <FBContactImporterAddressBookReaderDelegate, FBContactImporterNetworkerDelegate> {

	FBUserSession* _session;
	FBContactImporterAddressBookReader* _addressBookReader;
	FBContactImporterNetworker* _networker;
	NSArray* _abContacts;
	NSMutableSet* _matchedFaceBookUserIDs;
	NSMutableArray* _friendableContacts;
	NSArray* _invitableContacts;
	NSArray* _pymk;
	long long _contactImporterFlow;
	NSMutableDictionary* _ciFBPersonForFBID;
	NSMutableSet* _ciFBPersonForContacts;
	NSMutableSet* _ciFBPersonForPYMK;
	NSDictionary* _recordIDToContactsDict;
	NSString* _requestSessionID;
	FBContactImporterRevampModelListenerAnnouncer* _announcer;
	BOOL _protectedDataAvailable;
	int _modelStage;

}

@property (copy,readonly) NSArray * friendableContacts;                            //@synthesize friendableContacts=_friendableContacts - In the implementation block
@property (copy,readonly) NSArray * invitableContacts;                             //@synthesize invitableContacts=_invitableContacts - In the implementation block
@property (copy,readonly) NSArray * pymk;                                          //@synthesize pymk=_pymk - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * ciFBPersonForFBID;              //@synthesize ciFBPersonForFBID=_ciFBPersonForFBID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * ciFBPersonForContacts;                 //@synthesize ciFBPersonForContacts=_ciFBPersonForContacts - In the implementation block
@property (nonatomic,copy,readonly) NSSet * ciFBPersonForPYMK;                     //@synthesize ciFBPersonForPYMK=_ciFBPersonForPYMK - In the implementation block
@property (readonly) int modelStage;                                               //@synthesize modelStage=_modelStage - In the implementation block
@property (assign) BOOL protectedDataAvailable;                                    //@synthesize protectedDataAvailable=_protectedDataAvailable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didAddressBookReadSucceedWithContacts:(id)arg1 ;
-(void)didAddressBookReadFailWithError:(id)arg1 ;
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 withFriendableResponse:(id)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterNetworkerDidPartialFinish:(id)arg1 forContactRange:(NSRange)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterNetworkerDidPartialFail:(id)arg1 withError:(id)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withFriendableResponse:(id)arg2 invitableResponse:(id)arg3 ;
-(void)contactImporterNetworkerDidFail:(id)arg1 withError:(id)arg2 ;
-(void)contactImporterNetworkerDidFinish:(id)arg1 withPYMKResponse:(id)arg2 ;
-(void)contactImporterNetworkerDidFail:(id)arg1 withPYMKError:(id)arg2 ;
-(id)initWithSession:(id)arg1 contactImporterFlow:(long long)arg2 ;
-(id)_buildRecordIDToContactsMap:(id)arg1 ;
-(void)loadWithRequestSessionID:(id)arg1 ;
-(NSArray *)friendableContacts;
-(NSArray *)invitableContacts;
-(NSArray *)pymk;
-(NSDictionary *)ciFBPersonForFBID;
-(NSSet *)ciFBPersonForContacts;
-(NSSet *)ciFBPersonForPYMK;
-(int)modelStage;
-(BOOL)protectedDataAvailable;
-(void)setProtectedDataAvailable:(BOOL)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

