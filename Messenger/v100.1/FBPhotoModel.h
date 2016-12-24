/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSValue, NSAttributedString, UIImage, NSString;

@interface FBPhotoModel : NSObject {

	BOOL _albumIsManuallyCreated;
	BOOL _viewerCanDelete;
	NSValue* _focusPoint;
	NSAttributedString* _albumName;
	long long _albumPhotoCount;
	UIImage* _previewImage;
	CGSize _mediaSize;

}

@property (nonatomic,copy,readonly) NSString * fbid; 
@property (nonatomic,copy,readonly) NSValue * focusPoint;                        //@synthesize focusPoint=_focusPoint - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * albumName;              //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,readonly) BOOL albumIsManuallyCreated;                      //@synthesize albumIsManuallyCreated=_albumIsManuallyCreated - In the implementation block
@property (nonatomic,readonly) long long albumPhotoCount;                        //@synthesize albumPhotoCount=_albumPhotoCount - In the implementation block
@property (nonatomic,readonly) BOOL viewerCanDelete;                             //@synthesize viewerCanDelete=_viewerCanDelete - In the implementation block
@property (nonatomic,copy,readonly) UIImage * previewImage;                      //@synthesize previewImage=_previewImage - In the implementation block
@property (nonatomic,readonly) CGSize mediaSize;                                 //@synthesize mediaSize=_mediaSize - In the implementation block
-(NSString *)fbid;
-(id)imageSourceForFlag:(unsigned long long)arg1 ;
-(CGSize)imageSizeForFlag:(unsigned long long)arg1 ;
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(CGSize)mediaSize;
-(unsigned long long)bestImageFlag;
-(unsigned long long)worstImageFlag;
-(id)imageWithFlag:(unsigned long long)arg1 ;
-(BOOL)albumIsManuallyCreated;
-(long long)albumPhotoCount;
-(BOOL)viewerCanDelete;
-(id)description;
-(id)objectID;
-(NSAttributedString *)albumName;
-(NSValue *)focusPoint;
-(UIImage *)previewImage;
@end
