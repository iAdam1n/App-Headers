/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBContactImporterRevampModelListener.h>

@class NSString;

@interface FBContactImporterRevampModelListenerAnnouncer : FBAnnouncerBase <FBContactImporterRevampModelListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactImporterRevampModelDidLoad:(id)arg1 ;
-(void)contactImporterRevampModelDidFailLoading:(id)arg1 withError:(id)arg2 ;
-(void)contactImporterRevampModelDidReadAddressBook:(id)arg1 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 fromIndex:(unsigned long long)arg2 forNumberOfMatchedContacts:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfMatchedContacts:(unsigned long long)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidBatchLoad:(id)arg1 forNumberOfContacts:(unsigned long long)arg2 forBatchAtIndex:(unsigned long long)arg3 ;
-(void)contactImporterRevampModelDidLoadPYMK:(id)arg1 ;
-(void)contactImporterRevampModelDidFailPYMKLoading:(id)arg1 withError:(id)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

