/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/EMFXMLResponse.h>

@class EMFXMLNode;

@interface EMFSOAPResponse : EMFXMLResponse {

	EMFXMLNode* _headerNode;
	EMFXMLNode* _bodyNode;
	EMFXMLNode* _contentNode;

}

@property (nonatomic,retain) EMFXMLNode * headerNode;               //@synthesize headerNode=_headerNode - In the implementation block
@property (nonatomic,retain) EMFXMLNode * bodyNode;                 //@synthesize bodyNode=_bodyNode - In the implementation block
@property (nonatomic,retain) EMFXMLNode * contentNode;              //@synthesize contentNode=_contentNode - In the implementation block
-(EMFXMLNode *)headerNode;
-(void)setHeaderNode:(EMFXMLNode *)arg1 ;
-(EMFXMLNode *)bodyNode;
-(void)setBodyNode:(EMFXMLNode *)arg1 ;
-(void)setContentNode:(EMFXMLNode *)arg1 ;
-(EMFXMLNode *)contentNode;
-(void)parseData:(id)arg1 ;
@end

