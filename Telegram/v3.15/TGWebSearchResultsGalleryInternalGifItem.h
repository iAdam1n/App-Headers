/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGModernGalleryItem.h>
#import <Telegram/TGWebSearchResultsGalleryItem.h>
#import <Telegram/TGModernGalleryEditableItem.h>

@class TGMediaSelectionContext, TGMediaEditingContext, TGWebSearchInternalGifResult, NSString;

@interface TGWebSearchResultsGalleryInternalGifItem : NSObject <TGModernGalleryItem, TGWebSearchResultsGalleryItem, TGModernGalleryEditableItem> {

	TGMediaSelectionContext* selectionContext;
	TGMediaEditingContext* editingContext;
	TGWebSearchInternalGifResult* _webSearchResult;

}

@property (nonatomic,readonly) TGWebSearchInternalGifResult * webSearchResult;              //@synthesize webSearchResult=_webSearchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TGMediaSelectionContext * selectionContext; 
@property (nonatomic,retain) TGMediaEditingContext * editingContext; 
-(id)selectableMediaItem;
-(TGMediaSelectionContext *)selectionContext;
-(void)setSelectionContext:(TGMediaSelectionContext *)arg1 ;
-(id)editableMediaItem;
-(int)toolbarTabs;
-(BOOL)isEqual:(id)arg1 ;
-(id)uniqueId;
-(Class)viewClass;
-(TGWebSearchInternalGifResult *)webSearchResult;
-(id)initWithSearchResult:(id)arg1 ;
-(TGMediaEditingContext *)editingContext;
-(void)setEditingContext:(TGMediaEditingContext *)arg1 ;
@end
