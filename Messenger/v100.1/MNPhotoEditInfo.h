/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPhotoEditingDrawEdit, MNPhotoEditingTextEdit;

@interface MNPhotoEditInfo : FBValueObject <NSCopying> {

	MNPhotoEditingDrawEdit* _drawEdit;
	MNPhotoEditingTextEdit* _textEdit;

}

@property (nonatomic,copy,readonly) MNPhotoEditingDrawEdit * drawEdit;              //@synthesize drawEdit=_drawEdit - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoEditingTextEdit * textEdit;              //@synthesize textEdit=_textEdit - In the implementation block
-(MNPhotoEditingDrawEdit *)drawEdit;
-(MNPhotoEditingTextEdit *)textEdit;
-(id)initWithDrawEdit:(id)arg1 textEdit:(id)arg2 ;
@end
