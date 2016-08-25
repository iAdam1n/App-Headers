/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableArray;

@interface EDAMNoteFilter : NSObject <NSCoding> {

	int __order;
	BOOL __ascending;
	NSString* __words;
	NSString* __notebookGuid;
	NSMutableArray* __tagGuids;
	NSString* __timeZone;
	BOOL __inactive;
	NSString* __emphasized;
	BOOL __order_isset;
	BOOL __ascending_isset;
	BOOL __words_isset;
	BOOL __notebookGuid_isset;
	BOOL __tagGuids_isset;
	BOOL __timeZone_isset;
	BOOL __inactive_isset;
	BOOL __emphasized_isset;

}

@property (assign,setter=setOrder:,getter=order,nonatomic) int order; 
@property (assign,setter=setAscending:,getter=ascending,nonatomic) BOOL ascending; 
@property (setter=setWords:,getter=words,nonatomic,retain) NSString * words; 
@property (setter=setNotebookGuid:,getter=notebookGuid,nonatomic,retain) NSString * notebookGuid; 
@property (setter=setTagGuids:,getter=tagGuids,nonatomic,retain) NSMutableArray * tagGuids; 
@property (setter=setTimeZone:,getter=timeZone,nonatomic,retain) NSString * timeZone; 
@property (assign,setter=setInactive:,getter=inactive,nonatomic) BOOL inactive; 
@property (setter=setEmphasized:,getter=emphasized,nonatomic,retain) NSString * emphasized; 
-(void)read:(id)arg1 ;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(void)setTagGuids:(NSMutableArray *)arg1 ;
-(id)initWithOrder:(int)arg1 ascending:(BOOL)arg2 words:(id)arg3 notebookGuid:(id)arg4 tagGuids:(id)arg5 timeZone:(id)arg6 inactive:(BOOL)arg7 emphasized:(id)arg8 ;
-(BOOL)orderIsSet;
-(void)unsetOrder;
-(BOOL)ascendingIsSet;
-(void)unsetAscending;
-(BOOL)wordsIsSet;
-(void)unsetWords;
-(NSString *)notebookGuid;
-(BOOL)notebookGuidIsSet;
-(void)unsetNotebookGuid;
-(NSMutableArray *)tagGuids;
-(BOOL)tagGuidsIsSet;
-(void)unsetTagGuids;
-(BOOL)timeZoneIsSet;
-(void)unsetTimeZone;
-(BOOL)inactive;
-(BOOL)inactiveIsSet;
-(void)unsetInactive;
-(BOOL)emphasizedIsSet;
-(void)unsetEmphasized;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setTimeZone:(NSString *)arg1 ;
-(NSString *)timeZone;
-(void)setOrder:(int)arg1 ;
-(int)order;
-(void)setWords:(NSString *)arg1 ;
-(NSString *)words;
-(NSString *)emphasized;
-(void)setEmphasized:(NSString *)arg1 ;
-(void)setInactive:(BOOL)arg1 ;
-(void)write:(id)arg1 ;
-(BOOL)ascending;
-(void)setAscending:(BOOL)arg1 ;
@end

