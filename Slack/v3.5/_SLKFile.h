/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class SLKFileID, NSString, NSNumber, NSSet, SLKComment, SLKPin, SLKStar;

@interface _SLKFile : NSManagedObject

@property (nonatomic,readonly) SLKFileID * objectID; 
@property (nonatomic,retain) NSString * botId; 
@property (nonatomic,retain) id channelsBlob; 
@property (nonatomic,retain) NSNumber * commentsCount; 
@property (assign) int commentsCountValue; 
@property (nonatomic,retain) NSString * content; 
@property (nonatomic,retain) NSString * contentHighlightCSS; 
@property (nonatomic,retain) NSString * contentHighlightHTML; 
@property (nonatomic,retain) NSNumber * editable; 
@property (assign) BOOL editableValue; 
@property (nonatomic,retain) id emailAttachmentsBlob; 
@property (nonatomic,retain) id emailCCBlob; 
@property (nonatomic,retain) id emailFromBlob; 
@property (nonatomic,retain) NSString * emailPlainText; 
@property (nonatomic,retain) NSString * emailSubject; 
@property (nonatomic,retain) id emailToBlob; 
@property (nonatomic,retain) NSNumber * external; 
@property (assign) BOOL externalValue; 
@property (nonatomic,retain) NSString * externalTypeString; 
@property (nonatomic,retain) id groupsBlob; 
@property (nonatomic,retain) NSNumber * imageExifRotation; 
@property (assign) BOOL imageExifRotationValue; 
@property (nonatomic,retain) NSString * imageURL1024; 
@property (nonatomic,retain) NSString * imageURL360; 
@property (nonatomic,retain) NSString * imageURL64; 
@property (nonatomic,retain) NSString * imageURL720; 
@property (nonatomic,retain) NSString * imageURL80; 
@property (nonatomic,retain) id imsBlob; 
@property (nonatomic,retain) NSNumber * linesCount; 
@property (assign) int linesCountValue; 
@property (nonatomic,retain) NSNumber * markedForDeletion; 
@property (assign) BOOL markedForDeletionValue; 
@property (nonatomic,retain) NSString * mimetype; 
@property (nonatomic,retain) NSString * modeString; 
@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) NSNumber * normalizedId; 
@property (assign) long long normalizedIdValue; 
@property (nonatomic,retain) NSString * permalinkUrl; 
@property (nonatomic,retain) NSNumber * pinned; 
@property (assign) BOOL pinnedValue; 
@property (nonatomic,retain) NSString * prettyType; 
@property (nonatomic,retain) NSString * preview; 
@property (nonatomic,retain) NSString * previewHighlight; 
@property (nonatomic,retain) NSNumber * previewLinesCount; 
@property (assign) int previewLinesCountValue; 
@property (nonatomic,retain) NSString * privateDownloadUrl; 
@property (nonatomic,retain) NSString * privateUrl; 
@property (nonatomic,retain) NSNumber * public; 
@property (assign) BOOL publicValue; 
@property (nonatomic,retain) id reactionsBlob; 
@property (nonatomic,retain) NSString * simplifiedHTML; 
@property (nonatomic,retain) NSNumber * size; 
@property (assign) int sizeValue; 
@property (nonatomic,retain) NSString * snippet; 
@property (nonatomic,retain) NSNumber * starred; 
@property (assign) BOOL starredValue; 
@property (nonatomic,retain) NSNumber * starsCount; 
@property (assign) int starsCountValue; 
@property (nonatomic,retain) NSNumber * timestamp; 
@property (assign) double timestampValue; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * tsid; 
@property (nonatomic,retain) NSString * typePrettyString; 
@property (nonatomic,retain) NSString * typeString; 
@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) NSSet * comments; 
@property (nonatomic,retain) SLKComment * initialComment; 
@property (nonatomic,retain) SLKPin * pin; 
@property (nonatomic,retain) SLKStar * star; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(BOOL)markedForDeletionValue;
-(void)setMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)primitiveMarkedForDeletionValue;
-(void)setPrimitiveMarkedForDeletionValue:(BOOL)arg1 ;
-(BOOL)externalValue;
-(BOOL)editableValue;
-(BOOL)publicValue;
-(BOOL)starredValue;
-(void)setStarredValue:(BOOL)arg1 ;
-(BOOL)primitiveStarredValue;
-(void)setPrimitiveStarredValue:(BOOL)arg1 ;
-(double)timestampValue;
-(void)setTimestampValue:(double)arg1 ;
-(double)primitiveTimestampValue;
-(void)setPrimitiveTimestampValue:(double)arg1 ;
-(BOOL)pinnedValue;
-(void)setPinnedValue:(BOOL)arg1 ;
-(BOOL)primitivePinnedValue;
-(void)setPrimitivePinnedValue:(BOOL)arg1 ;
-(int)commentsCountValue;
-(void)setCommentsCountValue:(int)arg1 ;
-(int)primitiveCommentsCountValue;
-(void)setPrimitiveCommentsCountValue:(int)arg1 ;
-(void)setEditableValue:(BOOL)arg1 ;
-(BOOL)primitiveEditableValue;
-(void)setPrimitiveEditableValue:(BOOL)arg1 ;
-(void)setExternalValue:(BOOL)arg1 ;
-(BOOL)primitiveExternalValue;
-(void)setPrimitiveExternalValue:(BOOL)arg1 ;
-(BOOL)imageExifRotationValue;
-(void)setImageExifRotationValue:(BOOL)arg1 ;
-(BOOL)primitiveImageExifRotationValue;
-(void)setPrimitiveImageExifRotationValue:(BOOL)arg1 ;
-(int)linesCountValue;
-(void)setLinesCountValue:(int)arg1 ;
-(int)primitiveLinesCountValue;
-(void)setPrimitiveLinesCountValue:(int)arg1 ;
-(long long)normalizedIdValue;
-(void)setNormalizedIdValue:(long long)arg1 ;
-(long long)primitiveNormalizedIdValue;
-(void)setPrimitiveNormalizedIdValue:(long long)arg1 ;
-(int)previewLinesCountValue;
-(void)setPreviewLinesCountValue:(int)arg1 ;
-(int)primitivePreviewLinesCountValue;
-(void)setPrimitivePreviewLinesCountValue:(int)arg1 ;
-(void)setPublicValue:(BOOL)arg1 ;
-(BOOL)primitivePublicValue;
-(void)setPrimitivePublicValue:(BOOL)arg1 ;
-(int)primitiveSizeValue;
-(void)setPrimitiveSizeValue:(int)arg1 ;
-(int)starsCountValue;
-(void)setStarsCountValue:(int)arg1 ;
-(int)primitiveStarsCountValue;
-(void)setPrimitiveStarsCountValue:(int)arg1 ;
-(id)commentsSet;
-(int)sizeValue;
-(SLKFileID *)objectID;
-(void)setSizeValue:(int)arg1 ;
@end

