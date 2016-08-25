/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface EDAMSyncChunkFilter : NSObject <NSCoding> {

	BOOL __includeNotes;
	BOOL __includeNoteResources;
	BOOL __includeNoteAttributes;
	BOOL __includeNotebooks;
	BOOL __includeTags;
	BOOL __includeSearches;
	BOOL __includeResources;
	BOOL __includeLinkedNotebooks;
	BOOL __includeExpunged;
	BOOL __includeNoteApplicationDataFullMap;
	BOOL __includeResourceApplicationDataFullMap;
	BOOL __includeNoteResourceApplicationDataFullMap;
	NSString* __requireNoteContentClass;
	BOOL __includeNotes_isset;
	BOOL __includeNoteResources_isset;
	BOOL __includeNoteAttributes_isset;
	BOOL __includeNotebooks_isset;
	BOOL __includeTags_isset;
	BOOL __includeSearches_isset;
	BOOL __includeResources_isset;
	BOOL __includeLinkedNotebooks_isset;
	BOOL __includeExpunged_isset;
	BOOL __includeNoteApplicationDataFullMap_isset;
	BOOL __includeResourceApplicationDataFullMap_isset;
	BOOL __includeNoteResourceApplicationDataFullMap_isset;
	BOOL __requireNoteContentClass_isset;

}

@property (assign,setter=setIncludeNotes:,getter=includeNotes,nonatomic) BOOL includeNotes; 
@property (assign,setter=setIncludeNoteResources:,getter=includeNoteResources,nonatomic) BOOL includeNoteResources; 
@property (assign,setter=setIncludeNoteAttributes:,getter=includeNoteAttributes,nonatomic) BOOL includeNoteAttributes; 
@property (assign,setter=setIncludeNotebooks:,getter=includeNotebooks,nonatomic) BOOL includeNotebooks; 
@property (assign,setter=setIncludeTags:,getter=includeTags,nonatomic) BOOL includeTags; 
@property (assign,setter=setIncludeSearches:,getter=includeSearches,nonatomic) BOOL includeSearches; 
@property (assign,setter=setIncludeResources:,getter=includeResources,nonatomic) BOOL includeResources; 
@property (assign,setter=setIncludeLinkedNotebooks:,getter=includeLinkedNotebooks,nonatomic) BOOL includeLinkedNotebooks; 
@property (assign,setter=setIncludeExpunged:,getter=includeExpunged,nonatomic) BOOL includeExpunged; 
@property (assign,setter=setIncludeNoteApplicationDataFullMap:,getter=includeNoteApplicationDataFullMap,nonatomic) BOOL includeNoteApplicationDataFullMap; 
@property (assign,setter=setIncludeResourceApplicationDataFullMap:,getter=includeResourceApplicationDataFullMap,nonatomic) BOOL includeResourceApplicationDataFullMap; 
@property (assign,setter=setIncludeNoteResourceApplicationDataFullMap:,getter=includeNoteResourceApplicationDataFullMap,nonatomic) BOOL includeNoteResourceApplicationDataFullMap; 
@property (setter=setRequireNoteContentClass:,getter=requireNoteContentClass,nonatomic,retain) NSString * requireNoteContentClass; 
-(void)read:(id)arg1 ;
-(void)setIncludeNoteResources:(BOOL)arg1 ;
-(void)setIncludeNoteAttributes:(BOOL)arg1 ;
-(void)setIncludeNotebooks:(BOOL)arg1 ;
-(void)setIncludeTags:(BOOL)arg1 ;
-(void)setIncludeSearches:(BOOL)arg1 ;
-(void)setIncludeResources:(BOOL)arg1 ;
-(void)setIncludeLinkedNotebooks:(BOOL)arg1 ;
-(void)setIncludeExpunged:(BOOL)arg1 ;
-(void)setIncludeNoteApplicationDataFullMap:(BOOL)arg1 ;
-(void)setIncludeResourceApplicationDataFullMap:(BOOL)arg1 ;
-(void)setIncludeNoteResourceApplicationDataFullMap:(BOOL)arg1 ;
-(void)setRequireNoteContentClass:(NSString *)arg1 ;
-(id)initWithIncludeNotes:(BOOL)arg1 includeNoteResources:(BOOL)arg2 includeNoteAttributes:(BOOL)arg3 includeNotebooks:(BOOL)arg4 includeTags:(BOOL)arg5 includeSearches:(BOOL)arg6 includeResources:(BOOL)arg7 includeLinkedNotebooks:(BOOL)arg8 includeExpunged:(BOOL)arg9 includeNoteApplicationDataFullMap:(BOOL)arg10 includeResourceApplicationDataFullMap:(BOOL)arg11 includeNoteResourceApplicationDataFullMap:(BOOL)arg12 requireNoteContentClass:(id)arg13 ;
-(BOOL)includeNotesIsSet;
-(void)unsetIncludeNotes;
-(BOOL)includeNoteResources;
-(BOOL)includeNoteResourcesIsSet;
-(void)unsetIncludeNoteResources;
-(BOOL)includeNoteAttributes;
-(BOOL)includeNoteAttributesIsSet;
-(void)unsetIncludeNoteAttributes;
-(BOOL)includeNotebooks;
-(BOOL)includeNotebooksIsSet;
-(void)unsetIncludeNotebooks;
-(BOOL)includeTags;
-(BOOL)includeTagsIsSet;
-(void)unsetIncludeTags;
-(BOOL)includeSearches;
-(BOOL)includeSearchesIsSet;
-(void)unsetIncludeSearches;
-(BOOL)includeResources;
-(BOOL)includeResourcesIsSet;
-(void)unsetIncludeResources;
-(BOOL)includeLinkedNotebooks;
-(BOOL)includeLinkedNotebooksIsSet;
-(void)unsetIncludeLinkedNotebooks;
-(BOOL)includeExpunged;
-(BOOL)includeExpungedIsSet;
-(void)unsetIncludeExpunged;
-(BOOL)includeNoteApplicationDataFullMap;
-(BOOL)includeNoteApplicationDataFullMapIsSet;
-(void)unsetIncludeNoteApplicationDataFullMap;
-(BOOL)includeResourceApplicationDataFullMap;
-(BOOL)includeResourceApplicationDataFullMapIsSet;
-(void)unsetIncludeResourceApplicationDataFullMap;
-(BOOL)includeNoteResourceApplicationDataFullMap;
-(BOOL)includeNoteResourceApplicationDataFullMapIsSet;
-(void)unsetIncludeNoteResourceApplicationDataFullMap;
-(NSString *)requireNoteContentClass;
-(BOOL)requireNoteContentClassIsSet;
-(void)unsetRequireNoteContentClass;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)includeNotes;
-(void)setIncludeNotes:(BOOL)arg1 ;
-(void)write:(id)arg1 ;
@end

