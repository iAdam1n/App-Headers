/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ATRecord.h>
#import <Gumtree/ATJSONModel.h>
#import <Gumtree/ATRequestTaskProvider.h>

@class NSString, NSData;

@interface ATEvent : ATRecord <ATJSONModel, ATRequestTaskProvider>

@property (nonatomic,retain) NSString * pendingEventID; 
@property (nonatomic,retain) NSData * dictionaryData; 
@property (nonatomic,retain) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newInstanceWithJSON:(id)arg1 ;
-(void)updateWithJSON:(id)arg1 ;
-(id)apiJSON;
-(id)dataForDictionary:(id)arg1 ;
-(id)dictionaryForCurrentData;
-(id)managedObjectURIRepresentationForTask:(id)arg1 ;
-(void)cleanupAfterTask:(id)arg1 ;
-(id)requestForTask:(id)arg1 ;
-(int)taskResultForTask:(id)arg1 withRequest:(id)arg2 withResult:(id)arg3 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(void)setup;
@end

