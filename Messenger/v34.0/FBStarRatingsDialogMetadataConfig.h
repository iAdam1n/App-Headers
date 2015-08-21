/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBStarRatingsDialogMetadataConfig : NSObject <NSCoding, NSCopying> {

	BOOL _shouldShowImage;
	NSString* _title;
	NSString* _subtitle;
	NSString* _submitButton;
	NSString* _cancelButton;

}

@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * submitButton;              //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButton;              //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowImage;                        //@synthesize shouldShowImage=_shouldShowImage - In the implementation block
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 submitButton:(id)arg3 cancelButton:(id)arg4 shouldShowImage:(BOOL)arg5 ;
-(NSString *)submitButton;
-(BOOL)shouldShowImage;
-(void)setShouldShowImage:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)cancelButton;
-(NSString *)subtitle;
-(id)dictionaryRepresentation;
@end

