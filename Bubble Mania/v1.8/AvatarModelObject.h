/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/ModelObject.h>

@class NSString;

@interface AvatarModelObject : ModelObject {

	BOOL isFacebookPicture;
	NSString* thumbnailPath;
	NSString* gender;

}

@property (nonatomic,retain) NSString * thumbnailPath; 
@property (assign,nonatomic) BOOL isFacebookPicture; 
@property (nonatomic,retain) NSString * gender; 
+(id)mutableDictionaryTypes;
+(void)load;
-(BOOL)isFacebookPicture;
-(void)setIsFacebookPicture:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)thumbnailPath;
-(void)setThumbnailPath:(NSString *)arg1 ;
@end

