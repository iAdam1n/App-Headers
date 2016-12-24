/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNAttachmentShareTextViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _body;
	NSString* _attribution;

}

@property (nonatomic,copy,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                     //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * attribution;              //@synthesize attribution=_attribution - In the implementation block
-(id)initWithTitle:(id)arg1 body:(id)arg2 attribution:(id)arg3 ;
-(NSString *)title;
-(NSString *)body;
-(NSString *)attribution;
@end
