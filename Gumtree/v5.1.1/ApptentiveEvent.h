/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ApptentiveRecord.h>
#import <Gumtree/ApptentiveJSONModel.h>

@class NSString, NSData;

@interface ApptentiveEvent : ApptentiveRecord <ApptentiveJSONModel>

@property (nonatomic,retain) NSString * pendingEventID; 
@property (nonatomic,retain) NSData * dictionaryData; 
@property (nonatomic,retain) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)findEventWithPendingID:(id)arg1 ;
+(id)newInstanceWithJSON:(id)arg1 ;
+(id)newInstanceWithLabel:(id)arg1 ;
-(id)apiJSON;
-(id)dictionaryForCurrentData;
-(id)managedObjectURIRepresentationForTask:(id)arg1 ;
-(void)cleanupAfterTask:(id)arg1 ;
-(id)requestForTask:(id)arg1 ;
-(int)taskResultForTask:(id)arg1 withRequest:(id)arg2 withResult:(id)arg3 ;
-(id)dataForDictionary:(id)arg1 ;
-(void)updateWithJSON:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setup;
@end

