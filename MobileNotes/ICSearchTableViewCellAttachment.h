//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ICNotesListTableViewCell.h"

@class ICAttachmentBrickView;

@interface ICSearchTableViewCellAttachment : ICNotesListTableViewCell
{
    ICAttachmentBrickView *_brick;
}

- (void).cxx_destruct;
- (Class)attachmentBrickViewClass;
- (void)awakeFromNib;
@property(retain, nonatomic) ICAttachmentBrickView *brick; // @synthesize brick=_brick;
- (double)computeRowHeight;
- (void)contentSizeCategoryDidChange;
- (struct UIFont *)preferredFont;
- (void)prepareForReuse;
- (void)setAttachment:(id)arg1 searchResult:(id)arg2;

@end

