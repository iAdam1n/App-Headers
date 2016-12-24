/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, WAMessage;

@interface WAMessageDataItem : NSManagedObject <NSCopying> {

	BOOL _isInChildContext;

}

@property (nonatomic,copy,readonly) NSString * absoluteThumbnailPath; 
@property (assign,nonatomic) short type; 
@property (nonatomic,copy) NSString * chatJID; 
@property (nonatomic,copy) NSString * senderJID; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * matchedText; 
@property (nonatomic,copy) NSString * summary; 
@property (nonatomic,copy) NSString * sectionID; 
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) BOOL ownsThumbnail; 
@property (nonatomic,copy) NSString * content1; 
@property (nonatomic,copy) NSString * content2; 
@property (nonatomic,copy) NSString * thumbnailPath; 
@property (nonatomic,readonly) BOOL hasThumbnail; 
@property (nonatomic,readonly) NSString * context; 
@property (nonatomic,retain) WAMessage * message; 
@property (assign,nonatomic) long long index; 
+(void)copyDataItemsInMessage:(id)arg1 toMessage:(id)arg2 ;
+(void)insertDataItemsForMessageIfNeeded:(id)arg1 ;
+(id)fetchedResultsControllerForType:(short)arg1 inChatJIDs:(id)arg2 context:(id)arg3 ;
+(id)fetchRequestForMessagesPendingInsertDataItems;
+(unsigned long long)insertDataItemsForMessageIfNeeded:(id)arg1 ignoreMessagesWithoutChatSession:(BOOL)arg2 ;
+(id)insertURLDataItemForWebPageMessage:(id)arg1 ;
+(unsigned long long)insertDataItemsFromTextInMessage:(id)arg1 excludingURL:(id)arg2 countOccurrencesOnly:(BOOL)arg3 ;
+(id)newItemForMessage:(id)arg1 ;
+(BOOL)contextHasMessagesPendingInsertDataItems:(id)arg1 ;
+(long long)insertDataItemsForMessagesInContext:(id)arg1 count:(long long)arg2 ;
+(void)initialize;
-(void)beginObservingParentMessage;
-(void)endObservingParentMessage;
-(NSString *)absoluteThumbnailPath;
-(void)updateSenderJIDWithMessage:(id)arg1 ;
-(void)setExternalRelativeThumbnailPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)context;
-(id)originalURL;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMessage:(WAMessage *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)bestURL;
-(void)didSave;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)awakeFromSnapshotEvents:(unsigned long long)arg1 ;
-(BOOL)hasThumbnail;
-(id)canonicalURL;
@end
