/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBShareable.h>

@class NSURL, NSString, UIImage;

@interface FBURLShareable : NSObject <FBShareable> {

	NSURL* _URL;
	NSString* _text;
	NSString* _title;
	NSString* _subtitle;
	NSString* _description;
	NSURL* _imageURL;
	NSString* _type;
	UIImage* _image;
	NSString* _quote;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)shareableID;
-(id)shareableURL;
-(id)shareableType;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(id)shareableQuote;
-(id)initWithURL:(id)arg1 text:(id)arg2 ;
-(id)initWithURL:(id)arg1 text:(id)arg2 quote:(id)arg3 ;
-(id)initWithURL:(id)arg1 text:(id)arg2 title:(id)arg3 subtitle:(id)arg4 description:(id)arg5 imageUrl:(id)arg6 image:(id)arg7 type:(id)arg8 ;
@end
